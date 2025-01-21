#include <bits/stdc++.h>
using namespace std;

string toggle(string s){
    for (int i = 0; i<s.length() ; i++){
        if(s[i]>=65 && s[i]<=90){
            s[i]+=32;
        }
        else if(s[i]>='a' && s[i]<='z'){  //we can use both ascii or char
            s[i]-=32;
        }  
    }
    return s;
}

int main(){
    string s = "Sameer";
    string tg = toggle(s);
    cout<<tg;
    return 0;
}