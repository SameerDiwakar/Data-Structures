#include <iostream>
using namespace std;

// void countDuplicate(int A[], int size)
// {
//     for (int i = 0; i < size - 1; i++)
//     {
//         int count = 1;
//         if (A[i] != -1)
//         {
//             for (int j = i + 1; j < size; j++)
//             {
//                 if (A[j] == A[i])
//                 {
//                     count++;
//                     A[j] = -1;
//                 }
//             }
//         }
//         if (count > 1)
//         {
//             printf("%d is appearing %d times\n", A[i], count);
//         }
//     }
// }

void hashDuplicate(int arr[], int size)
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
            cout << i << " is appearing " << hash[i] << " times " << endl;
    }
}

int main()
{
    int arr[] = {2, 2, 1, 1, 2, 7, 8, 9, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    // countDuplicate(arr, size);
    hashDuplicate(arr, size);
    return 0;
}