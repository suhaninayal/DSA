//anagram
#include<bits/stdc++.h>
using namespace std;
bool anagram(string s,string t)
{
    map<char,int> mp;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
    }
    for(int i=0;i<t.length();i++)
    {
        int x=--mp[t[i]];
        if(x<0)
        {
            return false;
        }
    }
    return true;
}
int main()

{
    string s;
    getline(cin,s);
    string t;
    getline(cin,t);
    bool ans=anagram(s,t);
    cout<<ans;

}