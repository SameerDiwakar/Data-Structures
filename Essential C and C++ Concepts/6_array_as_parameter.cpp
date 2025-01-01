#include <iostream>
using namespace std;

void fun(int *A, int n)
{
   A[0] = 8;               // Since array is passed as pointer its value will
}                          // change in acutal array when changed in functn

int main()
{
   int A[] = {11, 13, 3, 23, 13};
   int n = 5;
   fun(A, n);
   for (int x : A)
   {
      cout << x << " ";
   }
   return 0;
}