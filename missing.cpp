#include<bits/stdc++.h>
using namespace std;
void dup(int arr[],int n)
{
    int hash[n]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]++;
    }
    for(int i=1;i<n;i++)
    {
    if(hash[i]==0)
    {
        cout<<i;
    }
}
}



int main()
{
    int arr[40],n;
    cout<<"enter the range=";
    cin>>n;
    cout<<"enter the elemtns=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dup(arr,n);
    return 0;
}