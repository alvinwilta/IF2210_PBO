//stack.cpp

#include <iostream>
#include "stack.hpp"

// ctor
Stack::Stack() {
    this->capacity = 10;
    this->size = 0;
    this->data = new int[this->capacity];
}

Stack::Stack(int cap) {
    this->capacity = cap;
    this->size = 0;
    this->data = new int[this->capacity];
}

//cctor
Stack::Stack(const Stack& s) {
    this->capacity = s.capacity;
    this->size = s.size;
    this->data = new int[s.capacity];
    for (int i=0; i<this->capacity; i++) {
        this->data[i] = s.data[i];
    }
}

//dtor
Stack::~Stack() {
    delete[] this->data;
}

//methods
void Stack::push(int x) {
    if (this->size < this->capacity) {
        this->data[this->size] = x;
        this->size++;
    }
}

int Stack::pop() {
    int top = NILL;
    if (this->size > 0) {
        this->size--;
        top = this->data[this->size];
    }
    return top;
}