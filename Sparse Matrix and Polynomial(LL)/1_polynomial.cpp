#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int coeff;
        int exp;
        Node* next;
    };

Node *poly = nullptr;

void create(){
    int n;
    Node *t,*last;
    int num;
    cout<<"Enter number of Terms"<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        t = new Node;
        cin>>t->coeff;
        cin>>t->exp;
        t->next=nullptr;
        if(poly==nullptr){
            poly=last=t;
        }
        else{
            last->next=t;
            last=t;
        }
    }
}

void disp(Node *p){
    while (p)
    {
        cout<<p->coeff<<"x"<<p->exp<<"+";
        p=p->next;
    }
    cout<<endl;
}

// eval fn

int main(){
    create();
    disp(poly);
    return 0;
}