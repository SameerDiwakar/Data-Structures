#include <iostream>
#include "Queue.h"
#include "Tree.h"
#include "Queue.cpp"

using namespace std;

Tree::Tree() {
    root = nullptr;
}

void Tree::CreateTree() {
    Node *p, *t = NULL;
    int x;
    Queue q(100); // Using the separated Queue class

    cout << "Enter root value: ";
    cin >> x;

    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.enqueue(root);

    while (!q.isEmpty()) {
        p = q.dequeue();
        cout << "Enter left child of " << p->data << " (-1 for no child): ";
        cin >> x; 
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.enqueue(t);
        }
        cout << "Enter right child of " << p->data << " (-1 for no child): ";
        cin >> x; 
        if (x != -1) {
            t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}

void Tree::Preorder(Node *p) {
    if (p) {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Preorder() {
    Preorder(root);
}

void Tree::Inorder(Node *p) {
    if (p) {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}

void Tree::Inorder() {
    Inorder(root);
}

void Tree::Postorder(Node *p) {
    if (p) {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << " ";
    }
}

void Tree::Postorder() {
    Postorder(root);
}

void Tree::Levelorder() {
    Queue q(100);
    cout << root->data << " ";
    q.enqueue(root);

    while (!q.isEmpty()) {
        root = q.dequeue();
        if (root->lchild) {
            cout << root->lchild->data << " ";
            q.enqueue(root->lchild);
        }
        if (root->rchild) {
            cout << root->rchild->data << " ";
            q.enqueue(root->rchild);
        }
    }
}

int Tree::Height(Node *root) {
    if (!root) return 0;
    int x = Height(root->lchild);
    int y = Height(root->rchild);
    return (x > y) ? x + 1 : y + 1;
}

Node* Tree::getRoot() {
    return root;
}

int main() {
    Tree t;
    t.CreateTree();

    cout << "Preorder: ";
    t.Preorder();
    cout << "\n";

    cout << "Inorder: ";
    t.Inorder();
    cout << "\n";

    cout << "Postorder: ";
    t.Postorder();
    cout << "\n";

    cout << "Levelorder: ";
    t.Levelorder();
    cout << "\n";

    cout << "Height of Tree: " << t.Height(t.getRoot()) << "\n";

    return 0;
}
