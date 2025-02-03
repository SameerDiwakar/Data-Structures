#include <iostream>
using namespace std;

class ToeplitzMatrix {
private:
    int *A;
    int n;

public:
    ToeplitzMatrix(int n) {
        this->n = n;
        A = new int[2 * n - 1]; // n elements for the first row and n-1 elements for the first column
    }

    ~ToeplitzMatrix() {
        delete[] A;
    }

    void set(int i, int j, int x) {
        if (i <= j) {
            A[j - i] = x; // First row
        } else {
            A[n + i - j - 1] = x; // First column
        }
    }

    int get(int i, int j) {
        if (i <= j) {
            return A[j - i]; // First row
        } else {
            return A[n + i - j - 1]; // First column
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
    ToeplitzMatrix tm(4);
    tm.set(1, 1, 1);
    tm.set(1, 2, 2);
    tm.set(1, 3, 3);
    tm.set(1, 4, 4);
    tm.set(2, 1, 5);
    tm.set(3, 1, 6);
    tm.set(4, 1, 7);

    tm.Display();

    return 0;
}
