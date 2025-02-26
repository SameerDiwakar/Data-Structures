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
    first->next = first->prev = nullptr;
    last = first;

    for (int i = 1; i < n; i++) {
        Node* t = new Node;
        t->data = A[i];
        t->next = last->next; 
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(Node *p){
    while (p)
    {
        cout << p->data <<" ";
        p=p->next;
    }
    cout<<endl;
}

int length(Node *p){
    int len =0;
    while (p)
    {
        len++;
        p=p->next;
    }
    return len;
}

void insert(Node *p,int x,int pos){
    Node *t;
    t = new Node;
    t->data=x;
    if(pos==0){
        t->prev=nullptr;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for (int i = 0; i < pos-1; i++)
        {
            p=p->next;
        }
        t->next=p->next;
        t->prev=p;
        if(p->next){
            p->next->prev=t;
        }
        p->next=t;
    }
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    create(A,5);
    insert(first,5,0);
    display(first);
    return 0;
}