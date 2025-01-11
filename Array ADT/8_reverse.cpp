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

void reverse(Array &arr)
{
    int *B;
    B = new int[arr.length];
    for (int i = arr.length - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr.A[i];
    }
    for (int i = 0; i < arr.length; i++)
    {
        arr.A[i] = B[i];
    }
    delete[] B;
}

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void reverse2(Array &arr)
{
    for (int  j = arr.length - 1, i = 0; i <j; j--, i++)
    {
        swap(arr.A[i],arr.A[j]);
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
    arr.display();
    reverse(arr);
    reverse2(arr);
    arr.display();
    return 0;
}