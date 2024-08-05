//split array
#include<bits/stdc++.h>
using namespace std;
int possible(int arr[],int n,int maxsum)
{
    int sum=0;
    int l=1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]+sum<=maxsum)
        {
            sum+=arr[i];
        }
        else{
            l++;
            sum=arr[i];

        }
    }
    return l;
}
int partition(int arr[],int n,int k)
{
    int maxi=INT_MIN;
    int mini=INT_MAX;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
        sum+=sum+arr[i];
    }
    for(int i=maxi;i<=sum;i++)
    {
        if(possible(arr,n,i)==k)
        {
            return i;
        }
    }
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=5;
    int k=3;
     int res=partition(arr,n,k);
     cout<<res;
}