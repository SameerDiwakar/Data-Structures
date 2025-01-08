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
    void insert(int index, int x){
        if (index>length && index>=0)
        {
            cout<<"Out of Bound";
        }
        else{
        for (int i = length; i > index; i--)
        {
            A[i]=A[i-1];
        }
        A[index]=x;
        length++;
        }
    }
};

int main()
{
    Array arr(5);
    arr.A[0]=1;
    arr.A[1]=2;
    arr.A[2]=3;
    arr.length =3;
    arr.display();
    arr.insert(4,4);
    arr.display();
    return 0;
}