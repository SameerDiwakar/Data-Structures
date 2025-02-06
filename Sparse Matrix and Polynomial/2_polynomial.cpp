#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int exp;
};

class Poly {
private:
    int n;
    Term *terms;

public:
    Poly(int n) {
        this->n = n;
        terms = new Term[n];
    }

    ~Poly() {
        delete[] terms;
    }

    void create() {
        cout << "Enter terms\n";
        for (int i = 0; i < n; i++) {
            cin >> terms[i].coeff >> terms[i].exp;
        }
    }

    void display() const {
        for (int i = 0; i < n; i++) {
            cout << terms[i].coeff << "x^" << terms[i].exp;
            if (i < n - 1) cout << " + ";
        }
        cout << endl;
    }

    Poly* add(const Poly &p2) const {
        int i = 0, j = 0, k = 0;
        Poly *sum = new Poly(n + p2.n);

        while (i < n && j < p2.n) {
            if (terms[i].exp > p2.terms[j].exp) {
                sum->terms[k++] = terms[i++];
            } else if (terms[i].exp < p2.terms[j].exp) {
                sum->terms[k++] = p2.terms[j++];
            } else {
                sum->terms[k].exp = terms[i].exp;
                sum->terms[k++].coeff = terms[i++].coeff + p2.terms[j++].coeff;
            }
        }
        for (; i < n; i++) sum->terms[k++] = terms[i];
        for (; j < p2.n; j++) sum->terms[k++] = p2.terms[j];

        sum->n = k;
        return sum;
    }
};

int main() {
    int n1, n2;
    cout << "Number of terms in first polynomial? ";
    cin >> n1;
    Poly p1(n1);
    p1.create();

    cout << "Number of terms in second polynomial? ";
    cin >> n2;
    Poly p2(n2);
    p2.create();

    Poly *p3 = p1.add(p2);

    cout << "\nFirst Polynomial: ";
    p1.display();
    cout << "\nSecond Polynomial: ";
    p2.display();
    cout << "\nSum Polynomial: ";
    p3->display();

    delete p3;

    return 0;
}