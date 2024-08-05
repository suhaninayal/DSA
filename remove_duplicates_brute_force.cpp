#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int remove(int arr[],int n)
{
    set<int>s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    int k=s.size();
  int j=0;
    for(int x:s)
    {
        arr[j]=x;
        j++;

    }
    return k;
}
int main()
{
    int arr[]={1,2,2,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
  int k=remove(arr,n);
  for(int i=0;i<k;i++)
  {
    cout<<arr[i];
  }

}