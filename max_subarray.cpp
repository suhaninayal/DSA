#include<bits/stdc++.h>
using namespace std;
int maxx(int arr[],int n)
{
    int maxii=INT_MIN;
  
    for(int i=0;i<n;i++)
    {
        //int max=0;
        for(int j=i;j<n;j++)
        {
             int sum=0;
           for(int k=i;k<=j;k++)
           {
            sum=sum+arr[k];
           }
           maxii=max(sum,maxii);
        }
    }
    cout<<maxii;
}
int main()
{
    int arr[40],n;
    cout<<"enter the n= ";
    cin>>n;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxx(arr,n);
    return 0;

}