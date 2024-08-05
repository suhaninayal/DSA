#include<bits/stdc++.h>
using namespace std;
//list
int main()
{
    list<int>l;
    
    l.push_back(8);
    l.push_back(80);
    l.push_back(8);
    l.push_back(84);

    for(int i:l)
    {
        cout<<i;
    }
    cout<<endl;
    cout<<l.size();
    int n;
    cout<<"enter the n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        l.push_back(i);
    }
    for(int i:l)
    {
        cout<<i;
    }
    return 0;
}