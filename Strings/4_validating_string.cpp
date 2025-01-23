#include <bits/stdc++.h>
using namespace std;

int validate(string s){
    for (int i = 0; i<s.length() ; i++){
        if(!(s[i]>=65 && s[i]<=90) && !(s[i]>=97 && s[i]<=122) && !(s[i]>=48 && s[i]<=57)){
            return 0;
        }
    }
    return 1;
}

int main(){
    string s = "Sameer";
    int tg = validate(s);
    if(tg){
        cout<< "Valid";
    }
    else{
        cout<< "Invalid";
    }
    return 0;
}