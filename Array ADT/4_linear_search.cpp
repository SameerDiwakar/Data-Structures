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

int ls(Array &obj,int val){
    for (int i = 0; i < obj.length; i++)
    {
        if(val == obj.A[i]){
            return i;
        }
    }
    return -1;
}

int main()
{
    Array arr(5);
    arr.A[0]=1;
    arr.A[1]=2;
    arr.A[2]=3;
    arr.length =3;
    cout<< ls(arr,3)<<endl;
    return 0;
}