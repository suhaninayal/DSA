//counting the frequency of the elements without using hash
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n)
{
    vector<int>a(n,0);

    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++)
        {

            if(arr[i]==arr[j])
            {
                a[j]=1;
                count++;   
            }
        }
        cout<<arr[i]<<" "<<count;
    }
}
int main()
{
    int n;
    
    cout<<"enter the range=";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of the array=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}
