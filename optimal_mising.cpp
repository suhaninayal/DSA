#include<bits/stdc++.h>
using namespace std;
void dup(int arr[],int n)
{
    int sum1=0;
    sum1=n*(n+1)/2;
  int sum=0;
  for(int i=0;i<n;i++)
  {
    sum=sum+arr[i];
  }
  int result=sum1-sum;
  cout<<"the missing number is"<<result;
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