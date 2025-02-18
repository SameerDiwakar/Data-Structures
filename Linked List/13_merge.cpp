#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* first = nullptr;
Node* second = nullptr;
Node* third = nullptr;

void Display(Node* p) {
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void create(int A[], int n, Node*& head) {
    head = new Node;
    head->data = A[0];
    head->next = nullptr;
    Node* last = head;

    for (int i = 1; i < n; i++) {
        Node* t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void Merge(Node* p, Node* q) {
    Node* last;
    if (p->data < q->data) {
        third = last = p;
        p = p->next;
        third->next = nullptr;
    } else {
        third = last = q;
        q = q->next;
        third->next = nullptr;
    }
    while (p && q) {
        if (p->data < q->data) {
            last->next = p;
            last = p;
            p = p->next;
            last->next = nullptr;
        } else {
            last->next = q;
            last = q;
            q = q->next;
            last->next = nullptr;
        }
    }
    if (p) last->next = p;
    if (q) last->next = q;
}

int main() {
    int A[] = {10, 20, 40, 50, 60};
    int B[] = {15, 18, 25, 30, 55};
    create(A, 5, first);
    create(B, 5, second);

    Merge(first, second);
    Display(third);

    return 0;
}
