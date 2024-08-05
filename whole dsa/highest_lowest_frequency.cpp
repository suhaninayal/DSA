//counting and printing  the highest and lowest frequency without using hash
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    vector<int>a(n,0);
    int maxele=0;
    int minele=0;
    int maxfre=0;
    int minfre=n;
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
          if(count>maxfre)
          {
            maxfre=count;
            maxele=arr[i];
          }
          if(count<minfre)
          {
            minfre=count;
            minele=arr[i];
          }


        }
        


    
    cout<<maxele<<" "<<minele;
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
    print(arr,n);
    return 0;
}