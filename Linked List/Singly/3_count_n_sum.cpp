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

int count (Node *p){
    int c =0;
    while (p!=0)        
    {
        c++;
        p=p->next;
    }
    return(c);
}

int rcount (Node *p){
    if(p==0){
        return 0;
    }
    return count(p->next) +1;
}

int add(Node *p){
    int sum =0;
    while (p)
    {
        sum=sum+p->data;
        p=p->next;
    }
    return sum;
}

int radd(Node *p){
    if(p==0){
        return 0;
    }
    return radd(p->next)+ p->data;
}

int main() {
 
    int A[] = {3, 5, 7, 10, 15};
    int n = sizeof(A)/sizeof(A[0]);
    Node* head = nullptr;
    create(A, n,head);
    cout << "Count: " << count(head) << endl;
    cout << "Recursive Count: " << rcount(head) << endl;
    cout << "Sum: " << add(head) << endl;
    cout << "Recursive Sum: " << radd(head) << endl;
    return 0;
}