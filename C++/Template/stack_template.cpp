#include <iostream>
#define SIZE 10

template <typename T>
class Stack {
    T stack[SIZE];
    int top;
public:
    Stack() { top = 0; }
    void push(T item);
    T pop();
    int IsEmpty();
    int IsFull();
};

template <typename T>
void Stack<T>::push(T item) {
    if (this->IsFull()) {
        std::cout << "\nStack is full\n";
    }
    stack[top] = item;
    top++;
}

template <typename T>
T Stack<T>::pop() {
    if (this->IsEmpty()) {
        std::cout << "\nStack is empty\n";
        return 0;
    }
    top--;
    return stack[top];
}

template <typename T>
int Stack<T>::IsEmpty() {
    return top <= 0;
}

template <typename T>
int Stack<T>::IsFull() {
    return top >= SIZE;
}

// special method for T = char
/*
void Stack<char>::push(char item) {
    if (top >= SIZE - 1) {
        std::cout << "\n Stack is full\n";
        return ;
    }
    stack[top] = item;
    top++;
}
*/
int main(void) {
    Stack<int> st1;
    Stack<char> st2;
    int i;
    for (i = 0; i < 8; i++) {
        st1.push(i+1);
        st2.push(char('A' + i));
    }
    std::cout << "From st1 pop:\n";
    for (i = 0; i < 8; i++)
        std::cout << st1.pop() << ' ';
    std::cout << std::endl;
    std::cout << "From st2 pop:\n";
    for (i = 0; i < 8; i++)
        std::cout << st2.pop() << ' ';
    std::cout << std::endl;
    return 0;
}

