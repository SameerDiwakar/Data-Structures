#include <bits/stdc++.h>
using namespace std;

void hashDup(string s){
    int hash[26] = {0};
    for(int i=0; i< s.length();i++){
        hash[s[i]-97]+=1;
    }
    for (int i = 0; i < 26; i++)
    {
        if(hash[i]>1){
            cout<< char(i+97)<<" ";
            cout<<hash[i]<<endl;
        }
    }
    
}
 
int main(){
    string s = "sameer loves paneer";
    hashDup(s);
    return 0;
}