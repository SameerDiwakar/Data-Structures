#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int A[10] ={1,2,3,4,5};  //Stack Array
    int *p;
    p = new int[5];  //Heap Array
    p[0]=0;
    p[1]=2;
    p[2]=4;
    p[3]=6;
    p[4]=8;
    for (int i = 0; i < 5; i++)
    {
        cout<< A[i]<< endl;
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<< p[i]<< endl;
    }
    
    return 0;
}