#include <iostream>
using namespace std;

class TridiagonalMatrix {
private:
    int *A;
    int n;

public:
    TridiagonalMatrix(int n) {
        this->n = n;
        A = new int[3 * n - 2]; // 3n - 2 elements for a tridiagonal matrix
    }

    ~TridiagonalMatrix() {
        delete[] A;
    }

    void set(int i, int j, int x) {
        if (i - j == 1) {
            A[i - 2] = x; // Lower diagonal
        } else if (i - j == 0) {
            A[n - 1 + i - 1] = x; // Main diagonal
        } else if (i - j == -1) {
            A[2 * n - 1 + i - 1] = x; // Upper diagonal
        }
    }

    int get(int i, int j) {
        if (i - j == 1) {
            return A[i - 2]; // Lower diagonal
        } else if (i - j == 0) {
            return A[n - 1 + i - 1]; // Main diagonal
        } else if (i - j == -1) {
            return A[2 * n - 1 + i - 1]; // Upper diagonal
        } else {
            return 0;
        }
    }

    void Display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    TridiagonalMatrix tm(4);
    tm.set(1, 1, 1);
    tm.set(1, 2, 2);
    tm.set(2, 1, 3);
    tm.set(2, 2, 4);
    tm.set(2, 3, 5);
    tm.set(3, 2, 6);
    tm.set(3, 3, 7);
    tm.set(3, 4, 8);
    tm.set(4, 3, 9);
    tm.set(4, 4, 10);

    tm.Display();

    return 0;
}