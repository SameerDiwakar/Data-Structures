#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;
};

Node *first = nullptr;

void create(int A[], int n)
{
    Node *last;
    first = new Node;
    first->data = A[0];
    first->next = first->prev = nullptr;
    last = first;

    for (int i = 1; i < n; i++)
    {
        Node *t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int length(Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

int del(Node *p, int idx)
{
    Node *q;
    int x;
    if (idx < 1 || idx > length(p))
    {
        return -1;
    }
    if (idx == 1)
    {
        first = first->next;

        if (first)
        {
            first->prev = nullptr;
        }
        x = p->data;
        delete p;
    }
    else
    {
        for (int i = 0; i < idx - 1; i++)
        {
            p = p->next;
        }
        p->prev->next = p->next;
        if (p->next)
        {
            p->prev->next = p->prev;
        }
        x = p->data;
        delete p;
    }
    return x;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(first);
    del(first,1);
    display(first);
    return 0;
}