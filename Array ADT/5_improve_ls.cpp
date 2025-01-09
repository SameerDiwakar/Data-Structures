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
    int tls(int val); //Improving Linear Search by Transposition
    int mth(int val); //Improving Linear Search by Move to Head/Front
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

int Array ::tls(int val){
     for (int i = 0; i < length; i++)
    {
        if(A[i] == val){
            if(i==0){
                return i;
            }
            swap(A[i],A[i-1]);
            return i-1;
        }
    }
    return -1;
}
int Array ::mth(int val){
     for (int i = 0; i < length; i++)
    {
        if(val == A[i]){
            swap(A[i],A[0]);
            return 0;
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
    cout<< "Element found at index: "<< arr.tls(2) << endl;
    arr.display();
    cout<< "Element found at index: "<< arr.mth(3) << endl;
    arr.display();
    return 0;
}

