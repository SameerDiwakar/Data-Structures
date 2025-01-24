#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}

void reverse(string &s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        swap(s[i], s[n - i - 1]);
    }
}

int main(){
    string s = "Sameer";
    reverse(s);
    cout << s;
    return 0;
}