#include <iostream>

using namespace std;

template <class T>
class Queue {
  private:
    T *elements;
    int nElements;
  public:
    Queue();
    ~Queue();
    void enqueue(const T& el);
    T dequeue();
    void print();
};

// Default constructor
template <class T>
Queue<T>::Queue() {
  elements = new T[10];
}
// Destructor
template <class T>
Queue<T>::~Queue() {
  delete [] elements;
}
// Method enqueue
template <class T>
void Queue<T>::enqueue(const T& el) {
  if (this->nElements!=10) {
    elements[this->nElements-1] = el;
    this->nElements++;
  } else {
    throw "Queue sudah penuh"
  }
}

// Method dequeue
template <class T>
T Queue<T>::dequeue() {
  if (this->nElements==0) {
    throw "Queue kosong"
  } else {
    T temp = elements[0];
    T kosong;
    if (this->nElements==1) {
      elements[0] == kosong;
      return temp;
    } else {
      for (int i=0; i<this->nElements-1; i++) {
        elements[i] = elements[i+1];
      }
      elements[this->nElements-1] = kosong;
      return temp;
    }
  }
}

// Method print
template <T>
void Queue<T>::print() {
  for (int i=0; i<this->nElements; i++) {
    cout << elements[i] << endl;
  }
}

template <class T>
class PriorityQueue : public Queue<T> {
  private:
    int *priorities;
  public:
    PriorityQueue();
    ~PriorityQueue();
    void enqueue(const T&, int);
};

// Default constructor

// Destructor

// Method enqueue

// Method dequeue, override if needed

// Method print, override if needed


// Main function
int main() {
  
}
