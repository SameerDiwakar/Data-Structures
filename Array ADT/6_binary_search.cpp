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

int bs(Array &obj,int val){
    int l = 0,h=obj.length-1;
    while (l<=h)            
    {
        int mid = (l+h)/2;
        if (val==obj.A[mid])
        {       
            return mid;
        }
        else if(val < obj.A[mid]){
            h=mid-1;
        }
        else{
            l=mid+1;
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
    cout<< bs(arr,3)<<endl;
    return 0;
}