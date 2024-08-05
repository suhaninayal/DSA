#include<bits/stdc++.h>
using namespace std;
//priority queue;
int main()
{
    set<int>s;
    s.insert(2);
    s.insert(7);
    s.insert(9);
    s.insert(1);
    s.insert(6);
    cout<<endl;
    s.find(9);
   for(auto i:s)
   {
    cout<<i;
   }
   set<int>::iterator it=s.begin();
   it++;
   s.erase(it);
   cout<<endl;
   for(auto i:s)
   {
    cout<<i;
   }
   cout<<endl;
   cout<<s.count(9);
   //cout<<s.find(9);
   
   
   
  
   

}