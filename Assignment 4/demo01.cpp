#include <iostream>

class Stack {
private:
    int *stackArray;
    int size;
    int top;

public:
    Stack(int size = 5) {
        this->size = size;
        stackArray = new int[size];
        top = -1;
    }

    ~Stack() {
        delete[] stackArray;
    }

    void push(int item) {
        if (isFull()) {
            std::cout << "Stack is full. Cannot push item." << std::endl;
        } else {
            top++;
            stackArray[top] = item;
        }
    }

    int pop() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot pop item." << std::endl;
            return -1; 
        } else {
            int item = stackArray[top];
            top--;
            return item;
        }
    }

    int peek() {
        if (isEmpty()) {
            std::cout << "Stack is empty. Cannot peek item." << std::endl;
            return -1; 
        } else {
            return stackArray[top];
        }
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == size - 1;
    }

    void printStack() {
        if (isEmpty()) {
            std::cout << "Stack is empty." << std::endl;
        } else {
            std::cout << "Stack:" << std::endl;
            for (int i = top; i >= 0; i--) {
                std::cout << stackArray[i] << std::endl;
            }
        }
    }
};

int main() {
    Stack stack(3);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);  
    stack.printStack();  
    std::cout << "Top of stack: " << stack.peek() << std::endl;
    std::cout << "Popped item: " << stack.pop() << std::endl;
    stack.printStack();  

    return 0;
}
