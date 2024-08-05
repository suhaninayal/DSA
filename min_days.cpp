#include<bits/stdc++.h>
using namespace std;
int divisor(vector<int> &arr,int n,int k)
{
    int sum=0;
   // int maxi=*max_element(arr.begin(),arr.end());
    for(int i=0;i<n;i++)
    {
        sum+=ceil((double)arr[i]/(double)k);
    }
        
    
    return sum;
}
int binary(vector<int> &arr,int limit,int n)
{
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    int low=1;
    int high=maxi;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(divisor(arr,n,mid)<=limit)
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
    vector<int> arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);

    }
    int ans=binary(arr,8,n);
    cout<<ans;

}