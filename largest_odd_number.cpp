#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int len=-1;
    for(int i=s.length();i>=0;i--)
    {
        if(s[i]%2!=0)
        {
            len=i;
            break;
        }
    }
    string str=s.substr(0,len+1);
    cout<<str;
}