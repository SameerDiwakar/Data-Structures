#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *first = nullptr;

void createCir(int A[], int n)
{
    Node *last;
    first = new Node;
    first->data = A[0];
    first->next = first;
    last = first;

    for (int i = 1; i < n; i++)
    {
        Node *t = new Node;
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

int del(Node *p, int index)
{
    Node *q;
    int x = -1;
    if (index < 0 || index > count(p))
    {
        return -1;
    }
    if (index == 1)
    {
        while (p->next != first)
        {
            p = p->next;
        }
        x = first->data;
        if (first == p)
        {
            delete p;
            first = nullptr;
        }
        else
        {
            p->next = first->next;
            delete first;
            first = p->next;
        }
    }
    else
    {
        q = nullptr;
        for (int i = 0; i < index - 2 && p; i++)
        {
            p = p->next;
        }

        q = p->next;
        p->next = q->next;
        x = q->data;
        delete q;
    }
    return x;
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    createCir(A, 5);
    cout << del(first, 2) << endl;
    Display(first);
    return 0;
}