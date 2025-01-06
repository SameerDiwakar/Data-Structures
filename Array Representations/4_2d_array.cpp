#include <iostream>
using namespace std;

int main(){
    int A[3][4];
    int *B[2];
    B[0] = new int[3];
    B[1] = new int[3];

    int **C;
    C= new int *[2];
    C[0] = new int[3];
    C[1] = new int[3];
    return 0;
}