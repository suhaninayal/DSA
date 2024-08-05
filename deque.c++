#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>dq;
    int n;
    cout<<"enter the n=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        dq.push_back(i);
    }
    //printing the elments of the deque;
    for(int i:dq)
    {
        cout<<i;
    }
}