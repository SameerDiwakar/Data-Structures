#include <iostream>

using namespace std;

// Call By Value 
struct Rectangle
{
    int length;
    int breadth;
};

void fun(struct Rectangle r){
    r.length =9;
    cout<< r.length <<endl << r.breadth <<endl;
}

int main(){
    struct Rectangle r ={10,5};
    fun(r);
    cout<< r.length <<endl << r.breadth;
    return 0;
}