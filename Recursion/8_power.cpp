#include <iostream>
using namespace std;

// int power(int n, int p){
//     if(p==0){
//         return 1;
//     }
//     return n*power(n,p-1);
// }

int power(int n, int p){
    if(p==0){
        return 1;
    }
   if(p%2==0){
       return power(n*n,p/2);
   }
    return n*power(n*n,(p-1)/2);
}


int main(){
    int res = power(2,5);
    cout<<res;    
    return 0;
}