#include <iostream>
using namespace std;

void sumwk(int A[], int size,int k)
{
    for (int i = 0; i < size - 1; i++)
    {
            for (int j = i + 1; j < size; j++)
            {
                if (A[j] + A[i]==k)
                {
                     cout << A[i] << "+" << A[j] << "=" << k <<endl;
                }
            }
    }
}

void hashSum(int arr[], int size,int k)
{
    int l = arr[0];
    int h = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < l)
        {
            l = arr[i];
        }
        if (arr[i] > h)
        {
            h = arr[i];
        }
    }
   int hash[h + 1] = {0};  //shortcut to initialise hash
    for (int i = 0; i < size; i++)
    {
        if(k - arr[i] >= 0 && hash[k-arr[i]]!=0){
            cout << arr[i] << "+" << k-arr[i] << "=" << k <<endl;
        }
        hash[arr[i]]++;
    }
}

int main()
{
    int arr[] = {12, 1, 2, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int k = 10;
    hashSum(arr, size,k);
    sumwk(arr,size,k);
    return 0;
}