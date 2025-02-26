
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

Node* linearSearch(Node* head, int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}

Node* recursiveLinearSearch(Node* head, int key) {
    if (head == nullptr) {
        return nullptr;
    }
    if (head->data == key) {
        return head;
    }
    return recursiveLinearSearch(head->next, key);
}

Node* fastSearch(Node*& head, int key) {
    Node* current = head;
    Node* prev = nullptr;
    while (current != nullptr) {
        if (current->data == key) {
            if (prev != nullptr) {
                prev->next = current->next;
                current->next = head;
                head = current;
            }
            return current;
        }
        prev = current;
        current = current->next;
    }
    return nullptr;
}

int main() {
 
    int A[] = {3, 5, 7, 10, 15};
    int n = sizeof(A)/sizeof(A[0]);
    Node* head = nullptr;
    create(A, n, head);
    int key = 10;
    Node* result = linearSearch(head, key);
    if (result != nullptr) {
        cout << "Found using linear search: " << result->data << endl;
    } else {
        cout << "Not found using linear search" << endl;
    }

    result = recursiveLinearSearch(head, key);
    if (result != nullptr) {
        cout << "Found using recursive linear search: " << result->data << endl;
    } else {
        cout << "Not found using recursive linear search" << endl;
    }

    result = fastSearch(head, key);
    if (result != nullptr) {
        cout << "Found using fast search: " << result->data << endl;
    } else {
        cout << "Not found using fast search" << endl;
    }
    return 0;
}