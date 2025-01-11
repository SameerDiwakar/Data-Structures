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

void insertsort(Array &arr,int val){
    if(arr.length !=arr.size){
        int i = arr.length -1;
        while(i>=0 && arr.A[i]>val){
            arr.A[i+1] = arr.A[i];
            i--;
        }
        arr.A[i+1]=val;
        arr.length++;
    }
}

int main()
{
    Array arr(5);
    arr.A[0] = 1;
    arr.A[1] = 2;
    arr.A[2] = 3;
    arr.A[3] = 4;
    arr.length = 4;
    insertsort(arr,0);
    arr.display();
    return 0;
}