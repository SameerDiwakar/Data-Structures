#include <iostream>
using namespace std;


void sump(int arr[], int size,int k)
{
  int i =0, j= size-1;
  while (i<j)       
  {
    if(arr[i]+arr[j]==k){
        cout<<arr[i]<<"+"<<arr[j]<<"="<<k<<endl;
        i++;
        j--;
    }
    else if(arr[i]+arr[j]<k){
        i++;
    }
    else{
        j--;
    }
  }
  
}

int main()
{
    int arr[] = {1, 2, 3, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 10;
    sump(arr, size,k);
    return 0;
}