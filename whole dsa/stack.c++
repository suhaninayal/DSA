#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    int n;
   cout<<"enetr n=";
   cin>>n;
   for(int i=0;i<n;i++)
   {
    s.push(i);
   }
   cout<<endl;
  cout<<s.top();
  cout<<endl;
  s.pop();
  cout<<endl;
  for(int i=0;i<s.size();i++)
  {
    cout<<i;
  }

}