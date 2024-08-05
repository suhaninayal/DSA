#include<bits/stdc++.h>
using namespace std;

int calculate_hour(int arr[],int n,int hour)
{
    
    int ans=0;
    for(int i=0ko;i<n;i++)
    {
        ans+=ceil((double)(arr[i]) / (double)(hour));

    }
    return ans;
}

int min_eat(int arr[],int n,int hour)
{ 
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
    }
    for(int i=1;i<=maxi;i++)
    {
        int req=calculate_hour(arr,n,i);
        if(req<=hour)
        {
            return i;
        }
    }
    return maxi;
}
int main()
{
    int arr[]={7,15,6,3};
    int n=4;
    int hour=8;
    int ans=min_eat(arr,n,hour);
    cout<<ans;
    
}