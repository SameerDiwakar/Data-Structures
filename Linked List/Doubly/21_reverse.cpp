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

void reverse(Node *p)
{
    Node *temp;
    p = first;
    while (p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        if (p->prev == nullptr && p != nullptr)
        {
            first = p;
        }
        p = p->prev;
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    create(A, 5);
    display(first);
    reverse(first);
    display(first);
    return 0;
}