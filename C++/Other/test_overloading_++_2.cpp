class MyInt {
    int i;
public:
    MyInt(int x) : i(x) {}
    const MyInt& operator++() {i++; return *this; }
    MyInt operator++(int)
        { MyInt tmp(*this); i++; return tmp; }
};
