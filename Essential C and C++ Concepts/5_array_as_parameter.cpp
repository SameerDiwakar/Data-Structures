// Arrays are always passed by address
#include <iostream>
using namespace std;

void fun(int *A, int n)
{
   cout << "Size in Function = " << sizeof(A) / sizeof(int) << endl;
   for (int i = 0; i < n; i++)
   {
      cout << A[i] << endl;
   }
}

int * fun ( int size)
{
   int *p;
   p =new int [size];
    for (int i = 0; i < size; i++){
      p[i] = i+1;
    }
    return p;
}


int main()
{
   int A[] = {11, 13, 3, 23, 13};
   int n = 5;
   fun(A, n);
   cout << "Size in Main = " << sizeof(A) / sizeof(int) << endl;
   for (int x : A)
   {
      cout << x << " ";
   }

   // Create an array with the help of pointer passing size as parameter

   int *ptr, sz = 7;
   ptr = fun(sz);
   for (int i = 0; i < sz; i++)
   {
      cout << ptr[i] << endl;
   }
   return 0;
}