#include <bits/stdc++.h>
using namespace std;

class Diagonal {
private:
    int *A;
    int n;
public:
    Diagonal(int n);  // Constructor
    void set(int i, int j, int x);
    int get(int i, int j);
    void display();
    ~Diagonal();  // Destructor
};

// Constructor definition
Diagonal::Diagonal(int n) {
    this->n = n;
    A = new int[n];
}

// Destructor definition
Diagonal::~Diagonal() {
    delete[] A;
}

// Set function definition
void Diagonal::set(int i, int j, int x) {
    if (i == j) {
        A[i - 1] = x;
    }
}

// Get function definition
int Diagonal::get(int i, int j) {
    if (i == j) {
        return A[i - 1];
    } else {
        return 0;
    }
}

// Display function definition
void Diagonal::display() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << A[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main() {
    Diagonal d(4); //dimension
    d.set(1, 1, 5);
    d.set(2, 2, 8);
    d.set(3, 3, 9);
    d.set(4, 4, 12);
    cout << "Matrix elements:" << endl;
    d.display();
    cout << "Element at (2,2): " << d.get(2, 2) << endl;
    cout << "Element at (3,4): " << d.get(3, 4) << endl;

    return 0;
}
