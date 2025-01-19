#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 23, 34, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if(arr[i]<min){
            min = arr[i];
        }
        else if(arr[i]>max){
            max =arr[i];
        }
    }
    cout << max<<" "<<min;
    return 0;
}