#include <iostream>

using namespace std;

// Call By Address
struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle *p){
    p->length = 9;
    cout<< p->length <<endl << p->breadth <<endl;
}

int main(){
    struct Rectangle r ={10,5};
    fun(&r);
    cout<< r.length <<endl << r.breadth;
    return 0;
}