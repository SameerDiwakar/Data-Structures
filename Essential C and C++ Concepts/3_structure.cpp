#include <iostream>

using namespace std;
struct rectangle
{
    int length;
    int breadth;
};

int main()
{;
    rectangle r ={90,80};
    cout<< r.length<<endl;
    cout<< r.breadth<<endl;

    // Pointer to Structure
    
    rectangle  *p = &r;
    cout<<p->length<<endl;
    cout<<p->breadth<<endl;
    return 0;
}