#include <bits/stdc++.h>
using namespace std;

int main(){
    string s = "sameer";
    string s1 = "reermas";
    int h[26]={0};
    for (int i = 0; i < s.length(); i++)
    {
        h[s[i]-97]+=1;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        h[s1[i]-97]-=1;
        if(h[s1[i]-97]<0){
            cout<<"Not an Anagram";
            return 0;
        }
    }  
    cout<<"Anagram";
    return 0;
}