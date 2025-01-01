#include <iostream>

using namespace std;
int main()
{
    int l = 0, b = 0;    //Good practice to initialize even if u take input
    cout << "Enter Length and Breadth:" << endl;
    cin >> l >> b;
    int a = l * b;
    int p = 2 * (l + b);
    cout << "Area = " << a << endl
         << "Perimeter = " << p;
    return 0;
}