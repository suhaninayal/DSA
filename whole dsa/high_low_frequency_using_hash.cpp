#include<iostream> 
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    int minele=0;
    int maxele=0;
    int minfre=n;
    int maxfre=0;
    unordered_map<int,int>map;
    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;
    }
    for(auto it:map)
    {
       
        int count=it.first;
        int elements=it.second;
        if(count>maxfre)
        {
            maxfre=count;
            maxele=it.first;
        }

        if(count<minfre)
        {
            minfre=count;
            minele=it.first;
        }
    }
    cout<< endl<<maxele<<"-"<<minele;
}
int main()
{
    int n;
    cout<<"enter the range=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    print(arr,n);
    return 0;
}