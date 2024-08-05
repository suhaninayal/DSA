#include<bits/stdc++.h>
using namespace std;
bool rotate(string s,string t)
{
   int len=s.length();
   string temp=s+s;
   if(temp.find(t)==string::npos)
   {
    return false;
   }
   return true;

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