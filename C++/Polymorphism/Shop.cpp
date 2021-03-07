// test polymorphism and upcast
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Product {
protected:    
    string name;
    double price;
    string producer;
public:
    virtual void PrintInfo() {
        cout << "Name: " << name << endl;
        cout << "Price: " << price << endl;
        cout << "Producer: " << producer << endl; 
    }
    virtual ~Product() {}
};

class User {
    string name;
public:
    void SelectedProduct(Product *pr) {
        cout << "Selected product" << endl;
        pr->PrintInfo();
    }
};

class Milk : public Product {
    double volume;
public:
    Milk(string aname, double aprice, string aproducer, double avolume) {
        name = aname;
        price = aprice;
        producer = aproducer;
        volume = avolume;
    }

    void PrintInfo() override {
        Product::PrintInfo();
        cout << "Volume: " << volume << endl;
    }
    ~Milk() override {}
};

class Bread : public Product {
    int specias;
public:

    Bread(string aname, double aprice, string aproducer, double aspecias) {
        name = aname;
        price = aprice;
        producer = aproducer;
        specias = aspecias;
    }
    void PrintInfo() override {
    Product::PrintInfo();
    cout << "Specias: " << specias << endl;  
    }
    ~Bread() override {}
};

int main(void) {
    Milk m("Slovyanochka",20.45,"Slovanyan",0.5);
    Bread b("Jitniy",5.45,"Zolotonosha",1);
    User customer;
    cout << "First product" << endl;
    customer.SelectedProduct(&m);
    cout << endl;
    cout << "Second product" << endl;
    customer.SelectedProduct(&b);   
    return 0;
}