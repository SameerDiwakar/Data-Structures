#include <iostream>
using namespace std;

int fctr(int n){
    if(n==0){
        return 1;
    }
    return n*fctr(n-1);
}


int main(){
    int res = fctr(5);
    cout<<res;
    return 0;
}