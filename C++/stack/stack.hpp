//stack.h
#ifndef STACK_H
#define STACK_H
#define NILL -999
class Stack {
private:
    int size;
    int capacity;
    int* data;
public:
    Stack();
    Stack(int cap);
    Stack(const Stack& s);
    ~Stack();

    void push(int x);
    int pop();
};

#endif