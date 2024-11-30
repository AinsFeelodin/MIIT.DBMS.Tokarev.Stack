#include "Node.h"
#include <string>

template <typename T>
class Stack {
private:
    Node<T>* top;
    int size;

public:
    Stack();
    ~Stack();
    void push(T value);
    T pop();
    T peek() const;
    int isEmpty() const;
    int getSize() const;
    std::string toString() const;
};


template <typename T>
Stack<T>::Stack() : top(nullptr), size(0) {}

template <typename T>
Stack<T>::~Stack() {
    while (!isEmpty()) {
        pop();
    }
}

template <typename T>
void Stack<T>::push(T value) {
    top = new Node<T>(value, top);
    ++size;
}

template <typename T>
T Stack<T>::pop() {
    if (isEmpty()) {
        return T();  
    }
    Node<T>* temp = top;
    T value = top->data;
    top = top->next;
    delete temp;
    --size;
    return value;
}

template <typename T>
T Stack<T>::peek() const {
    if (isEmpty()) {
        return T();  
    }
    return top->data;
}

template <typename T>
int Stack<T>::isEmpty() const {
    return (size == 0) ? 1 : 0;
}

template <typename T>
int Stack<T>::getSize() const {
    return size;
}

template <typename T>
std::string Stack<T>::toString() const {
    std::string result = "[";
    Node<T>* current = top;
    while (current) {
        result += std::to_string(current->data);
        if (current->next) {
            result += ", ";
        }
        current = current->next;
    }
    result += "]";
    return result;
}


