#include <iostream>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
 
int main(){
    Node *p;
    p= new Node;
    p->data =10;
    p->next =nullptr;
    delete p;
    return 0;
}