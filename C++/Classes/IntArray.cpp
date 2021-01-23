class IntArray {
    int *p;
    unsigned int size;
public:
    IntArray() {
        size = 16;
        p = new int[size];
    }

    IntArray(const IntArray &original) {
        size = original.size;
        p = new int[size];
        for (int i = 0; i < size; i++) {
            p[i] = original.p[i];
        }
    }

    ~IntArray() { delete [] p; }
    int& operator[](unsigned int idx);
private:
    void Resize(unsigned int required_index);
    void operator=(const IntArray& ref) {}
};

int& IntArray::operator[](unsigned int idx) {
    if (idx >= size) 
        Resize(idx);
    return p[idx];
}

void IntArray::Resize(unsigned int required_index) {
    unsigned int new_size = size;
    while (new_size <= required_index)
        new_size *= 2;
    int *new_array = new int[new_size];
    for (unsigned int i = 0; i < size; i++)
        new_array[i] = p[i];
    delete [] p;
    p = new_array;
    size = new_size;
}
