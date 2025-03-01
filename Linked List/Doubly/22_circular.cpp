#include <iostream>
using namespace std;

class Node {
public:
    Node* prev;
    int data;
    Node* next;
};

Node* first = nullptr;

void create(int A[], int n) {
    Node* last;
    first = new Node;
    first->data = A[0];
    first->next = first->prev = first;
    last = first;

    for (int i = 1; i < n; i++) {
        Node* t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
    first->prev = last;
    last->next = first;
}

void display(Node* p) {
    Node* temp = p;
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != temp);
    cout << endl;
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(first);
    return 0;
}
