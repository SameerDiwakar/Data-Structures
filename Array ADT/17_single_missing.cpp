#include <iostream>
using namespace std;

int findMissingElement(int arr[], int size) {   //if first n natural numbers are given
    int totalSum = (size + 1) * (size + 2) / 2;
    int arraySum = 0;
    for (int i = 0; i < size; i++) {
        arraySum += arr[i];
    }
    return totalSum - arraySum;
}

int findMissingElement2(int arr[], int size) {   //if first n natural numbers are not given
    int l = arr[0];
    int h = arr[size];
    int d = l-0;
    for (int i = 0; i < size; i++) {
        if(arr[i]-i != d){
            return i+d;
            break;
        }
    }
    return -1;
   
}


int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int missingElement = findMissingElement(arr, size);
    cout << "The missing element in Array is: " << missingElement << endl;
    int missingElement2 = findMissingElement2(arr, size);
    cout << "The missing element in Array is: " << missingElement << endl;
    return 0;
}