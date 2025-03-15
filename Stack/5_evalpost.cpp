#include <iostream>
#include <stack>
#include <string>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack();
    ~Stack();
    void push(int x);
    int pop();
    int peek(int index);
    bool isEmpty();
    int stackTop();
};

Stack::Stack() {
    top = nullptr;
}

Stack::~Stack() {
    Node* p = top;
    while (top) {
        top = top->next;
        delete p;
        p = top;
    }
}

void Stack::push(int x) {
    Node* t = new Node;
    if (!t) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    t->data = x;
    t->next = top;
    top = t;
}

int Stack::pop() {
    if (!top) {
        cout << "Stack Underflow!" << endl;
        return -1;
    }
    Node* p = top;
    int x = p->data;
    top = top->next;
    delete p;
    return x;
}

bool Stack::isEmpty() {
    return top == nullptr;
}

int Stack::stackTop() {
    return top ? top->data : -1;
}

int Stack::peek(int index) {
    if (isEmpty()) return -1;
    Node* p = top;
    for (int i = 0; p != nullptr && i < index - 1; i++) {
        p = p->next;
    }
    return p ? p->data : -1;
}

bool isOperand(char x) {
    return !(x == '+' || x == '-' || x == '*' || x == '/');
}

int operation(char op, int x, int y) {
    switch (op) {
        case '+': return x + y;
        case '-': return x - y;
        case '*': return x * y;
        case '/': return x / y;
        default: return 0;
    }
}

int Evaluate(const string& postfix) {
    Stack stk;
    for (char ch : postfix) {
        if (isOperand(ch)) {
            stk.push(ch - '0');
        } else {
            int y = stk.pop();
            int x = stk.pop();
            stk.push(operation(ch, x, y));
        }
    }
    return stk.pop();
}

int postfixEvaluate(const string& postfix) {
    stack<int> stk;
    for (char ch : postfix) {
        if (isOperand(ch)) {
            stk.push(ch - '0');
        } else {
            int y = stk.top(); stk.pop();
            int x = stk.top(); stk.pop();
            stk.push(operation(ch, x, y));
        }
    }
    return stk.top();
}

int main() {
    string postfix = "35*62/+4-";
    cout << "Custom Stack Evaluate: " << Evaluate(postfix) << endl;
    cout << "STL Stack Evaluate: " << postfixEvaluate(postfix) << endl;
    return 0;
}