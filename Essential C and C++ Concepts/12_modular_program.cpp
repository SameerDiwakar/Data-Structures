#include <iostream>

int area(int l, int b)
{
    return l * b;
}
int perimeter(int l, int b)
{
    int peri;
    peri = 2 * (l + b);
    return peri;
}
using namespace std;
int main()
{
    int l = 0, b = 0;
    cout << "Enter Length and Breadth:" << endl;
    cin >> l >> b;
    int a = area(l, b);
    int p = perimeter(l, b);
    cout << "Area = " << a << endl
         << "Perimeter = " << p;
    return 0;
}