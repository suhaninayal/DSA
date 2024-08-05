#include<iostream>
using namespace std;
void rotate(int arr[],int n,int k)
{
   k=k%n;
   int temp[n];
   for(int i=0;i<k;i++)
   {
      temp[i]=arr[i];
   }
   for(int i=k;i<n;i++)
   {
    arr[i-k]=arr[i];
   }
   for(int i=n-k;i<n;i++)
   {
    arr[i]=temp[i-(n-k)];
   }
}

int main()
{
    int arr[40],n,k;
    cout<<"enter the range=";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the k=";
    cin>>k;
    rotate(arr,n,k);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}