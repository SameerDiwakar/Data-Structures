#include <bits/stdc++.h>
using namespace std;

void count(string s){
    int v=0,c=0;
    for (int i = 0; i<s.length() ; i++){
        if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || 
            s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || 
            s[i] == 'u' || s[i] == 'U') {
            v++;
        }
        else if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)){ 
            c++;
        }  
    }
    cout << "No of Vowels: "<<v<<endl;
    cout << "No of consonants: "<<c<<endl;
}
void wcount(string s){
    int w=1;
    for (int i = 0; i<s.length() ; i++){
        if(s[i]==' ' && s[i-1]!=' '){
            w++;
        }
    }
    cout << "No of Words: "<<w<<endl;
}


int main(){
    string s = "Sameer Diwakar";
    count(s);
    wcount(s);
    return 0;
}