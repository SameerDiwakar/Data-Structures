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

bool isLoop(Node *f){
    Node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q!=nullptr?q->next:q;
    }while(p&&q && p!=q);
return p == q? true: false;
}



int main() {
    Node *t1,*t2;
    int A[] = {10, 2, 30, 40, 50};
    create(A, 5);  //can use constructor insetad
    t1=first->next->next;
    t2=first->next->next->next->next;
    t2->next=t1;
    bool a = isLoop(first);
    cout << a;
    return 0;
}