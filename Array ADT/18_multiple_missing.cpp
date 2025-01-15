#include <iostream>
using namespace std;


void multipleMissing(int arr[], int size) {
    int l = arr[0];  //put the lowest element
    int h = arr[size];
    int d = l-0;
    for (int i = 0; i < size; i++) {
        if(arr[i]-i != d){
            while (d<arr[i]-i)
            {   
               cout << i+d <<endl; 
               d++;
            }
        }
    }
}


int main() {
    int arr[] = {2, 3, 4, 6, 7, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    multipleMissing(arr, size);
    return 0;
}