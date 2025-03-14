#include <iostream>
#include <cstring>
using namespace std;

class Stack {
private:
    struct Node {
        char data;
        Node* next;
    } *top;

public:
    Stack() : top(nullptr) {}

    ~Stack() {
        while (top != nullptr) {
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    void push(char x) {
        Node* t = new Node;
        if (t == nullptr) {
            cout << "Stack is full\n";
        } else {
            t->data = x;
            t->next = top;
            top = t;
        }
    }

    char pop() {
        Node* t;
        char x = -1;
        if (top == nullptr) {
            cout << "Stack is Empty\n";
        } else {
            t = top;
            top = top->next;
            x = t->data;
            delete t;
        }
        return x;
    }

    char stackTop() {
        if (top != nullptr) {
            return top->data;
        }
        return -1;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void display() {
        Node* p = top;
        while (p != nullptr) {
            cout << p->data << " ";
            p = p->next;
        }
        cout << endl;
    }
};

int pre(char x) {
    if (x == '+' || x == '-') {
        return 1;
    } else if (x == '*' || x == '/') {
        return 2;
    }
    return 0;
}

int isOperand(char x) {
    if (x == '+' || x == '-' || x == '*' || x == '/') {
        return 0;
    }
    return 1;
}

char* InToPost(const char* infix) {
    Stack st;
    int i = 0, j = 0;
    int len = strlen(infix);
    char* postfix = new char[len + 2];

    st.push('#');

    while (infix[i] != '\0') {
        if (isOperand(infix[i])) {
            postfix[j++] = infix[i++];
        } else {
            if (pre(infix[i]) > pre(st.stackTop())) {
                st.push(infix[i++]);
            } else {
                postfix[j++] = st.pop();
            }
        }
    }
    while (!st.isEmpty() && st.stackTop() != '#') {
        postfix[j++] = st.pop();
    }

    postfix[j] = '\0';
    return postfix;
}

int main() {
    const char* infix = "a+b*c-d/e";
    char* postfix = InToPost(infix);

    cout << postfix << endl;

    delete[] postfix;

    return 0;
}