#include <bits/stdc++.h>
using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

string reverse(string &s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; ++i)
    {
        swap(s[i], s[n - i - 1]);
    }
    return s;
}

int main()
{
    string s = "nitin";
    string s2 = s;
    string s1 = reverse(s);
    cout<< s1;
    if(s1==s2){
        cout<<"String Equal Palindrome";
    }
    else if(s2[s2.length()]>s1[s1.length()]){
        cout<<"s is greater";
    }
    else{
        cout<<"s1 is greater";
    }
    return 0;
}