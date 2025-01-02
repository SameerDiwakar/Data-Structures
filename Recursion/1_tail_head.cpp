#include <iostream>
using namespace std;

void fun(int n){
    if(n>0){
        // fun(n-1); Head Recursion
        cout<< n <<endl;
        fun(n-1);    //Tail Recursion
    }
}

int main(){
    int x = 3;
    fun(x);
    return 0;
}