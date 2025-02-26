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


void removeDup(Node *p){
    Node *q= first->next;
    while (q!=nullptr)
    {
        if (p->data != q->data)
        {
            p=q;
            q=q->next;
        }
        else        
        {
            p->next=q->next;
            delete q;
            q=p->next;
        }     
    }
    
}

int main() {
    int A[] = {10, 10, 30, 40,40,40, 50};
    create(A, 7);
    removeDup(first);
    Display(first);
    return 0;
}