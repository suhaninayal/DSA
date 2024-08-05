#include<bits/stdc++.h>
using namespace std;
int  dup(int arr[],int n)
{
  int xor1=0;
  int xor2=0;
   for(int i=0;i<n-1;i++)
   {
    xor1=xor1^(i+1);
    xor2=xor2^arr[i];
   }
   xor1=xor1^n;
   return(xor1^xor2);
}



int main()
{
    int arr[40],n, c;
    cout<<"enter the range=";
    cin>>n;
    cout<<"enter the elemtns=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    c=dup(arr,n);
    cout<<c;
    return 0;
}