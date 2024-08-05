#include<bits/stdc++.h>
using namespace std;
int calculate(int arr[],int n,int hour)
{
    int ans=0;
   for(int i=0;i<n;i++)
   {
    ans+=ceil((double)(arr[i])/(double)(hour));
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
    int low=1;
    int high=maxi;
   
    while(low<=high)
    {
       int mid=(low+high)/2;
       int ans=calculate(arr,n,mid);
       if(ans<=hour)
       {
        high=mid-1;
       }
       else
       {
        low=mid+1;
       }
    }
    return low;
}
int main()
{
    int arr[]={7,15,6,3};
    int n=4;
    int hour=8;
    int res=min_eat(arr,n,hour);
    cout<<res;

}