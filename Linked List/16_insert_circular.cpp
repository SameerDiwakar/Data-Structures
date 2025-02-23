#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* first = nullptr;

void createCir(int A[], int n) {
    Node* last;
    first = new Node;
    first->data = A[0];
    first->next = first;
    last = first;

    for (int i = 1; i < n; i++) {
        Node* t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(Node* p) {
    do {
        cout << p->data << " ";
        p = p->next;
    } while (p != first);
    cout << endl;
}

int count(Node* p) {
    int c = 0;
    do {
        c++;
        p = p->next;
    } while (p != first);
    return c;
}

void Insert(Node* p, int index, int x) {
    if (index < 0 || index > count(p)) return;
    Node* t;
    if (index == 0) {
        t = new Node;
        t->data = x;
        if (first == nullptr) {
            first = t;
            first->next = first;
        } else {
            while (p->next != first) {
                p = p->next;
            }
            p->next = t;
            t->next = first;
            first = t;
        }
    } else {
        for (int i = 0; i < index - 1; i++) {
            p = p->next;
        }
        t = new Node;
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    createCir(A, 5);
    Display(first);
    Insert(first, 0, 8);
    Display(first);
    return 0;
}