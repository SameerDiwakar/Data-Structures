#include <iostream>

using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};

int main()
{
    struct  Rectangle *p;
    p = new Rectangle;
    p->length =99;
    p->breadth =89;

    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}