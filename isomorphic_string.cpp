#include<bits/stdc++.h>
using namespace std;
bool check(string s,string t)
{
 unordered_map<char,char>ma1;
    unordered_map<char,char>ma2;
 for(int i=0;i<s.length();i++)
    {
        char ch1=s[i];
        char ch2=t[i];
      if (ma1.find(ch1)!=ma1.end() && ma1[ch1]!=ch2 || ma2.find(ch2)!=ma2.end() && ma2[ch2]!=ch1)
      {
        return false;
      }
      else
      {
        ma1[ch1]=ch2;
        ma2[ch2]=ch1;
      }
       
    }
    return true;
    }
int main()
{
    string s;
    string t;
    getline(cin,s);
    getline(cin,t);
    bool ans=check(s,t);
    cout<<ans;
}
   


   