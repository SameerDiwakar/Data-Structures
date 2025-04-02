#include "Queue.h"
#include "Tree.h"  // Include Tree to access Node class

Queue::Queue(int size) {
    front = rear = -1;
    this->size = size;
    Q = new Node*[size];
}

Queue::~Queue() {
    delete[] Q;
}

void Queue::enqueue(Node *x) {
    if (rear == size - 1)
        std::cout << "Queue Full\n";
    else {
        rear++;
        Q[rear] = x;
    }
}

Node* Queue::dequeue() {
    Node *x = nullptr;
    if (front == rear)
        std::cout << "Queue is Empty\n";
    else {
        x = Q[++front];
    }
    return x;
}

bool Queue::isEmpty() {
    return front == rear;
}
