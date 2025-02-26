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


int del(Node *p,int index){
    Node * q,t;
    int x=-1;
    if(index<0 || index>count(p)){
        return -1;
    }
    if(index==1){
        x=first->data;
        p=first;
        first=first->next;
        delete p;
    }
    else{
        p=first;
        q=nullptr;
        for (int i = 0; i < index-1 && p; i++)
        {
            q=p;
            p=p->next;
        }

        if(p){
         q->next=p->next;
         x=p->data;
        delete p;
        }   
    }
    return x;
}

int main() {
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    cout<< del(first,2)<<endl;
    Display(first);
    return 0;
}