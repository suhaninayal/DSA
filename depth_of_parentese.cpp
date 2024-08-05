#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int maxlen=0,count=0;
    int i=0;
    //cout<<s.length();
   while(i<s.length())
    {
        if(s[i]=='(')
        {
            count++;
            if(count>maxlen)
            {
                maxlen=count;
            }
        }
        else
        {
            if(s[i]==')')
            {
                count--;
            }
        }
        i++;
    }
    cout<<maxlen;
}