//string is palindrome or not; abba->abba
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp;
    int n=s.length();
   
  for(int i=n-1;i>=0;i--)
  {
    temp.push_back(s[i]);
  }
  if(s==temp)
  {
    cout<<"palindrome";
  }
  else
  {
    cout<<"not palindrome";
  }
}