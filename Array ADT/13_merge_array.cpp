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
        cout << endl;
    }
    ~Array()
    {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

Array mergeArray(Array &obj1, Array &obj2)
{
    int i = 0, j = 0, k = 0;
    Array result(obj1.length + obj2.length);

    while (i < obj1.length && j < obj2.length)
    {
        if (obj1.A[i] < obj2.A[j])
        {
            result.A[k++] = obj1.A[i++];
        }
        else
        {
            result.A[k++] = obj2.A[j++];
        }
    }
    while (i < obj1.length)
    {
        result.A[k++] = obj1.A[i++];
    }
    while (j < obj2.length)
    {
        result.A[k++] = obj2.A[j++];
    }
    result.length = obj1.length + obj2.length;
    return result;
}

int main()
{
    Array arr1(5);
    int initialValues1[] = {1, 4, 8, 12, 20};
    arr1.length = sizeof(initialValues1) / sizeof(initialValues1[0]);
    for (int i = 0; i < arr1.length; i++)
    {
        arr1.A[i] = initialValues1[i];
    }

    Array arr2(5);
    int initialValues2[] = {2, 7, 15, 16, 19};
    arr2.length = sizeof(initialValues2) / sizeof(initialValues2[0]);
    for (int i = 0; i < arr2.length; i++)
    {
        arr2.A[i] = initialValues2[i];
    }
    Array arr3 = mergeArray(arr1, arr2);
    cout << "Array 1: ";
    arr1.display();
    cout << "Array 2: ";
    arr2.display();
    cout << "Merged Array: ";
    arr3.display();

    return 0;
}