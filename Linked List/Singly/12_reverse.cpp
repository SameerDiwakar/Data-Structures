#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *first = nullptr;

void create(int A[], int n)
{
    Node *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++)
    {
        Node *t = new Node;
        t->data = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    while (p != nullptr)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int count(Node *p)
{
    int c = 0;
    while (p != nullptr)
    {
        c++;
        p = p->next;
    }
    return c;
}

void reverse1(Node *p)
{
    int *A, i = 0;
    Node *q=p;
    A = new int[count(p)];
    while (q != nullptr)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != nullptr)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void reverse2(Node *p){
    Node *q=nullptr,*r=nullptr;
    while (p!=nullptr)
    {
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    first=q;
    
}

void reverse3(Node *q,Node*p){
        if(p){
            reverse3(p,p->next);
            p->next=q;
        }
        else{

            first=q;
        }
}

int main()
{
    int A[] = {10, 30, 20, 40, 50};
    create(A, 5);
    reverse1(first);
    Display(first);
    reverse2(first);
    Display(first);
    reverse3(nullptr,first);
    Display(first);
    return 0;
}