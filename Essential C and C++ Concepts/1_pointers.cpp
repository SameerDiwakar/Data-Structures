#include <iostream>
using namespace std;
int main()
{
    int A[5] = {2, 4, 6, 8, 10};
    int *p;
    p = A; // No need to use & it ll be incorrect
    for (int j=0; j < 5; j++)
    {
        cout << p[j] << endl;
    }

    // Assigning memory in Heap
    int *ptr;
    ptr = new int[5]; //Same as Malloc in C
    ptr[0] =1; ptr[1] =2; ptr[2] =3; ptr[3] =4; ptr[4] =5;
    for (int j=0; j < 5; j++)
    {
        cout << ptr[j] << endl;
    }
    delete [ ] ptr; //Releasing the dynamic allocated memory in Heap
    return 0;
}
















