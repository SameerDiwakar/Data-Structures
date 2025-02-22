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
    }while(p!=first);
    cout << endl;
}

void rdisplay(Node *p){
    static int flag =0;
    if (p!=first || flag ==0)
    {
        flag =1;
        cout << p->data <<" ";
        rdisplay(p->next);
    }
    flag =0;
}



int main() {
    int A[] = {10, 20, 30, 40, 50};
    createCir(A, 5);
    Display(first);
    rdisplay(first);
    return 0;
}