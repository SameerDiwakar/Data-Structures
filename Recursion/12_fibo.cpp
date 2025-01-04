#include <iostream>
using namespace std;

int fibo(int x){
    if(x<=1){
        return x;
    }
    return fibo(x-2)+fibo(x-1);
}

int F[10];

int mfibo(int n){
    if(n<=1){
        F[n]=n;
        return n;
    }
    else{
       if (F[n-2]==-1)
       {        
        F[n-2]==mfibo(n-2);
       }
       if (F[n-1]==-1)
       {        
        F[n-1]==mfibo(n-1);
       }
       F[n] = F[n-2]+F[n-1];
       return F[n-2]+F[n-1];
    }
}

int main(){
    int s,f;
    s = fibo(10);
    cout << s<<endl;
    for (int i = 0; i <=10; i++)
    {
        F[i]=-1;
    }
    f = mfibo(10);
    cout << f;
    return 0;
}