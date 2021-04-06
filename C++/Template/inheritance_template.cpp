#include <iostream>

template <class T1>
class TypeSize 
{
protected:
    T1 value;
public:
    TypeSize(T1 value) {
        this->value = value;
    }
    void DataTypeSize() {
        std::cout << "value " << sizeof(value) << std::endl;
    }
};


template <class T1>
class TypeInfo : public TypeSize<T1> {
public:
    TypeInfo(T1 value) : TypeSize<T1>(value){
    }
    void ShowTypeName() {
        std::cout << "Name type: " << typeid(TypeSize<T1>::value).name() << std::endl;
    }
};

int main(void) {
    double a = 2;
    TypeInfo<int> c(a);
    c.ShowTypeName();
    c.DataTypeSize();

}