#include <iostream>

using std::cout;
using std::string;
using std::endl;

class Msg {
    string msg;
public:
    Msg(string msg) {
        this->msg = msg;
    }
    virtual string GetMessage() {
        return msg;
    }
};

class BracketsMsg : public Msg {
public:
    BracketsMsg(string message) : Msg(message) { }

    string GetMessage() override {
        return "[" + ::Msg::GetMessage() + "]";
    }
};

class Printer {
public:
    void Print(Msg *msg) {
        cout << msg->GetMessage() << endl;
    }
};

int main(void) {
    BracketsMsg message("Hello, world");
    Printer printer;
    printer.Print(&message);   
}