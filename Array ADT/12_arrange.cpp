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

void swap(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

void arrange(Array &arr){
    int i=0;
    int j=arr.length-1;
    while(i<j){
        while(arr.A[i]<0) {i++;}
        while(arr.A[j]>=0) {j--;}
        if(i<j){
            swap(arr.A[i],arr.A[j]);
        }
    }
}

int main()
{
    Array arr(5);
    arr.A[0] = 1;
    arr.A[1] = -2;
    arr.A[2] = 3;
    arr.A[3] = -4;
    arr.length = 4;
    arrange(arr);
    arr.display();
    return 0;
}