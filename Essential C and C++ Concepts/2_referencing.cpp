#include <iostream>

using namespace std;
int main()
{
    int a = 10;
    int &r = a; // r is nick name to a or reference to a now r cannot be used again for other purposes in program
    cout << a << endl
         << r << endl;
    a = 7;
    cout << a << endl
         << r << endl; // r will also change as a and vice-versa
    return 0;
}

// In call by Reference in cpp its same as call by value just in funcn def & is added before parameters and call by ref is diff from call by address