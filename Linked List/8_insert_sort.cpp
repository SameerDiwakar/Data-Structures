#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* first = nullptr;

void create(int A[], int n) {
    Node* last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++) {
        Node* t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void Display(Node* p) {
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}


void Insert(Node* p, int x) {
    Node* t , *q =nullptr;
    t = new Node;
    t->data = x;
    t->next = nullptr;
    if (first == nullptr) {
        first = t;
    } else {
        while (p && p->data<x) {
            q=p;
            p = p->next;
        }
        if(p==first){
            t->next = first;
            first = t;
        }
        else{
            t->next=q->next;
            q->next=t;
        }
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    Insert(first,5);
    Display(first);
    return 0;
}