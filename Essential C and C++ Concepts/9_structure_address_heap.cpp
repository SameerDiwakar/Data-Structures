#include <iostream>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle *fun()
{
    struct Rectangle *p;
    p = new Rectangle;
    p->length = 15;
    p->breadth = 44;
}

int main()
{
    struct Rectangle *ptr = fun();
    cout << ptr->length << endl
         << ptr->breadth << endl;
    return 0;
}