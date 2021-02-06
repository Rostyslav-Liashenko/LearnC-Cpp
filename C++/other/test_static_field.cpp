class A {
    int other_field;
public:
    static int the_static_field; // static field
};

int A::the_static_field = 0;

int main(void) {
    A a;
    a.the_static_field = 15;
    A::the_static_field = 16;
}
