#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b) {
    char temp = a;
    a = b;
    b = temp;
}


void perm(string &s,int k){
    static int A[10]={0};
    static char res[10];
    int i;
    if (s[k]=='\0')
    {
        res[k]='\0';
        cout<<res<<" ";
    }
    else{
        for (int i = 0; s[i] != '\0'; i++)
        {
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
        }
        
    }
    
}

void perm2(string &s,int l,int h){\
    int i;
    if (l==h)
    {
    
        cout<<s<<" ";
    }
    else{
        for (int i = l; i<=h; i++)
        {
            swap(s[l],s[i]);
            perm2(s,l+1,h);
            swap(s[l],s[i]);
        }
    }
    
}

int main(){
    string s = "Same";
    perm(s,0);
    cout<<endl;
    perm2(s,0,s.length()-1);
    return 0;
}