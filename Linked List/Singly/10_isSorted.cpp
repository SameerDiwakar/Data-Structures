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

int count(Node* p) {
    int c = 0;
    while (p != nullptr) {
        c++;
        p = p->next;
    }
    return c;
}

bool isSorted(Node *p){
    int x = INT32_MIN;
    while (p!=nullptr)
    {
        if(p->data<x){
            return false;
        }
        x=p->data;
        p=p->next;
    }
    return true;
}


int main() {
    int A[] = {10, 2, 30, 40, 50};
    create(A, 5);
    Display(first);
    cout << isSorted(first);
    return 0;
}