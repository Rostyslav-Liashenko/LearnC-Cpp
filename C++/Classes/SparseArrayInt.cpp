class SparseArrayInt {
    struct Item
    {
        int index;
        int value;
        Item *next;
    };
    Item *first;
public:
    SparseArrayInt() : first(0) {}
    ~SparseArrayInt();
    class Interm {
        friend class SparseArrayInt;
        SparseArrayInt *master;
        int index;
        Interm(SparseArrayInt *a_master, int ind) : master(a_master), index(ind) {}
        int& Provide();
        void Remove();
    public:
        operator int();
        int operator=(int x);
        int operator+=(int x);
        int operator++();
        int operator++(int);
    };
    friend class Interm;
    Interm operator[] (int idx)
        {return Interm(this, idx); }
private:
    SparseArrayInt(const SparseArrayInt&) {}
    void operator=(const SparseArrayInt&) {}
};

SparseArrayInt::~SparseArrayInt() {
    while(first) {
        Item *tmp = first;
        first = first->next;
        delete tmp;
    }
}

int SparseArrayInt::Interm::operator+=(int x) {
    int& location = Provide();
    location += x;
    int res = location;
    if (res == 0)
        Remove();
    return res;
}

int SparseArrayInt::Interm::operator++() {
    int &location = Provide();
    int res = ++location;
    if (location == 0)
        Remove();
    return res;
}

int SparseArrayInt::Interm::operator++(int) {
    int& location = Provide();
    int res = location++;
    if (location == 0)
        Remove();
    return res;
}

SparseArrayInt::Interm::operator int() {
    Item* tmp;
    for(tmp = master->first; tmp; tmp->next) {
        if (tmp->index == index) {
            return tmp->value;
        }
    }
    return 0;
}

int& SparseArrayInt::Interm::Provide() {
    Item* tmp;
    for (tmp = master->first; tmp; tmp = tmp->next) {
        if (tmp->index == index)
            return tmp->value;
    }
    tmp = new Item;
    tmp->index = index;
    tmp->next = master->first;
    master->first = tmp;
    return tmp->value;
}

void SparseArrayInt::Interm::Remove() {
    Item** tmp;
    for (tmp = &(master->first); *tmp; tmp = &(*tmp)->next) {
        if((*tmp)->index == index) {
            Item *to_delete = *tmp;
            *tmp = (*tmp)->next;
            delete to_delete;
            return ;
        }
    }
}