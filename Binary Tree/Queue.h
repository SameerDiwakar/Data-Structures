#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>

class Node; // Forward declaration

class Queue {
private:
    int front;
    int rear;
    int size;
    Node **Q;

public:
    Queue(int size = 10);
    ~Queue();
    void enqueue(Node *x);
    Node* dequeue();
    bool isEmpty();
};

#endif
