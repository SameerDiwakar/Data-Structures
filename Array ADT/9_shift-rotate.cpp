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
        cout<<endl;
    }
    ~Array()
    {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

void leftShift(Array &arr)
{
    if (arr.length == 0) return;
    for (int i = 0; i < arr.length - 1; i++)
    {
        arr.A[i] = arr.A[i + 1];
    }
    arr.A[arr.length - 1] = 0;
}

void leftRotate(Array &arr)
{
    if (arr.length == 0) return;
    int temp = arr.A[0];
    for (int i = 0; i < arr.length - 1; i++)
    {
        arr.A[i] = arr.A[i + 1];
    }
    arr.A[arr.length - 1] = temp;
}

void rightShift(Array &arr)
{
    if (arr.length == 0) return;
    for (int i = arr.length - 1; i > 0; i--)
    {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[0] = 0;
}

void rightRotate(Array &arr)
{
    if (arr.length == 0) return;
    int temp = arr.A[arr.length - 1];
    for (int i = arr.length - 1; i > 0; i--)
    {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[0] = temp;
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
    arr.display();
    leftRotate(arr);
    arr.display();
    leftShift(arr);
    arr.display();
    return 0;
}