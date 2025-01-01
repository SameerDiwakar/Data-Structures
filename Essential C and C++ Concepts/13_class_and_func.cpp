#include <iostream>
class rectangle
{
public:
    int l;
    int b;
    void initialize(int c, int d)
    {
        l = c;
        b = d;
    }
    int area()
    {
        return l * b;
    }
    int perimeter()
    {
        int peri;
        peri = 2 * (l + b);
        return peri;
    }
};
using namespace std;
int main()
{
    rectangle r;
    cout << "Enter Length and Breadth:" << endl;
    cin >> r.l >> r.b;

    int a = r.area();
    int p = r.perimeter();
    cout << "Area = " << a << endl << "Perimeter = " << p;
    return 0;
}