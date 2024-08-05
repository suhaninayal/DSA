#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string str;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(' && s[i+1]==')')
        {
            str.push_back(s[i]);
             str.push_back(s[i+1]);
        }

    }
    cout<<str;
}