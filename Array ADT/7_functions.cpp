#include <iostream>
using namespace std;

class Array
{
public:
    int *A;
    int size;
    int length;

public:
    Array(int size)
    {
        this->size = size;
        A = new int[size];
    }
    void display()
    {
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << endl;
        }
    }
    ~Array()
    {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int get(Array &arr, int index)
{
    if (index > 0 && index < arr.length)
    {
        return arr.A[index];
    }
    return -1;
}
int set(Array &arr, int index, int x)
{
    if (index > 0 && index < arr.length)
    {
        arr.A[index] = x;
    }
    return -1;
}

int max(Array &arr)
{
    int max = arr.A[0];
    for (int i = 1; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int sum(Array &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum;
}
int avg(Array &arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        sum = sum + arr.A[i];
    }
    return sum/arr.length;
}

int rsum(Array &arr, int n)
{
    if (n < 0)
    {
        return 0;
    }
    else
    {
        return rsum(arr, n - 1) + arr.A[n];
    }
}

int main()
{
    Array arr(5);
    arr.A[0] = 1;
    arr.A[1] = 2;
    arr.A[2] = 3;
    arr.A[3] = 4;
    arr.A[4] = 5;
    arr.length = 5;
    cout << "Get element at index 2: " << get(arr, 2) << endl;
    set(arr, 2, 10);
    cout << "Max element: " << max(arr) << endl;
    cout << "Sum of elements: " << sum(arr) << endl;
    cout << "Average of elements: " << avg(arr) << endl;
    cout << "Recursive sum of elements: " << rsum(arr, arr.length - 1) << endl;
    arr.display();
    return 0;
}