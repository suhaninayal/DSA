#include<bits/stdc++.h>
using namespace std;
bool rotate(string s,string t)
{
 int len=s.length();
    for(int i=0;i<len;i++)
    {
        char ch=s[i];
        s=s+ch;
        string temp=s.substr(i+1,len+1);
        if(temp==t)
        {
           return true;
            break;
        }
    }
    return false;
}
int main()
{
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
   bool ans=rotate(s,t);
   cout<<ans;
}