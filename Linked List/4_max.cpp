
#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};

void create(int A[], int n, Node *&head){
    head = new Node;
    Node* temp;
    Node* last;
    head->data = A[0];
    head->next = nullptr;
    last = head;
    for (int i = 1; i < n; i++) {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
        last->next = temp;
        last = temp;
    }
}

int max(Node *p){
    int m = INT32_MIN;
    while (p)
    {
        if (p->data)
        {
            m=p->data;
        }
        p=p->next;
    }
    return (m);
    
}

int maxRecursive(Node *p) {
    if (p == nullptr)
        return INT32_MIN;
    int maxRest = maxRecursive(p->next);
    return (p->data > maxRest) ? p->data : maxRest;
}

int main() {
 
    int A[] = {3, 5, 7, 10, 15};
    int n = sizeof(A)/sizeof(A[0]);
    Node* head = nullptr;
    create(A, n,head);
    cout << max(head);
    cout << maxRecursive(head);
    return 0;
}