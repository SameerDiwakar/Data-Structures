#include <iostream>
using namespace std;

void findDuplicate(int arr[], int size)
{
    int lastDup = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == arr[i + 1] && arr[i] != lastDup)
        {
            cout << arr[i] << endl;
            lastDup = arr[i];
        }
    }
}

void countDuplicate(int A[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] == A[i + 1])
        {
            int j = i + 1;
            while (A[j] == A[i])
            {
                j++;
            }
            printf("%d is appearing %d times\n", A[i], j - i);
            i = j - 1;
        }
    }
}

void hashDuplicate(int arr[], int size){
    int l = 0; 
    int h = arr[size-1]; // since its a sorted array
    int hash[size];
    for (int i = l; i <= h; i++)
    {
        hash[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = l; i <= h; i++)
    {
        if (hash[i] > 1)
            cout << i << " is appearing "<< hash[i] << " times "<< endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 7, 8, 9, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    findDuplicate(arr, size);
    countDuplicate(arr, size);
    hashDuplicate(arr, size);
    return 0;
}