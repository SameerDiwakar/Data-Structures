#include <iostream>
using namespace std;

void multipleMissing(int arr[], int size)
{
    int l = 1;  // given
    int h = 10; // given
    int d = l - 0;
    int hash[10];
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
        if (hash[i] == 0)
            cout << i << endl;
    }
}

int main()
{
    int arr[] = {2, 4, 7, 6, 5, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    multipleMissing(arr, size);
    return 0;
}