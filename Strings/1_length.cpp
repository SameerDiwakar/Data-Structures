#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "Sameer";     //char s[]="Sameer"
    cout<< s.length() << endl;

    int i;
    for (i = 0; s[i]!= '\0'; i++){}
    cout<< i;
    return 0;
}