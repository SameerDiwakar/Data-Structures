#include <iostream>
using namespace std;

class SymmMatrix {
private:
    int *A;
    int n;

public:
    SymmMatrix(int n) {
        this->n = n;
        A = new int[n * (n + 1) / 2];
    }

    ~SymmMatrix() {
        delete[] A;
    }

    void set(int i, int j, int x) {
        if (i >= j) {
            A[i * (i - 1) / 2 + j - 1] = x;
        } else {
            A[j * (j - 1) / 2 + i - 1] = x;
        }
    }

    int getRowMajor(int i, int j) {
        if (i >= j) {
            return A[i * (i - 1) / 2 + j - 1];
        } else {
            return A[j * (j - 1) / 2 + i - 1];
        }
    }

    int getColMajor(int i, int j) {
        if (i >= j) {
            return A[i * (i - 1) / 2 + j - 1];
        } else {
            return A[j * (j - 1) / 2 + i - 1];
        }
    }

    void Display(bool row = true) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (row) {
                    cout << getRowMajor(i, j) << " ";
                } else {
                    cout << getColMajor(i, j) << " ";
                }
            }
            cout << endl;
        }
    }
};

int main() {
    SymmMatrix sm(4);
    sm.set(1, 1, 1);
    sm.set(2, 1, 2);
    sm.set(2, 2, 3);
    sm.set(3, 1, 4);
    sm.set(3, 2, 5);
    sm.set(3, 3, 6);
    sm.set(4, 1, 7);
    sm.set(4, 2, 8);
    sm.set(4, 3, 9);
    sm.set(4, 4, 10);

    cout << "Row-major display:" << endl;
    sm.Display(true);

    cout << "Column-major display:" << endl;
    sm.Display(false);

    return 0;
}