#ifndef TREE_H
#define TREE_H

class Node {
public:
    Node *lchild;
    int data;
    Node *rchild;
};

class Tree {
private:
    Node *root;

public:
    Tree();
    void CreateTree();
    void Preorder();
    void Preorder(Node *p);
    void Inorder();
    void Inorder(Node *p);
    void Postorder();
    void Postorder(Node *p);
    void Levelorder();
    int Height();
    int Height(Node *root);
    Node* getRoot(); // Added getRoot() method declaration
};

#endif
