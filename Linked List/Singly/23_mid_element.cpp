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

void mid(Node *p) {
    Node *q;
    p = q = first;
    while (q && q->next) {
        q = q->next->next;
        if (q) {
            p = p->next;
        }
    }
    cout << p->data << endl;
}

int main()
{
    int A[] = {10, 30, 20, 40, 50};
    create(A, 5);
    Display(first);
    mid(first);
    return 0;
}