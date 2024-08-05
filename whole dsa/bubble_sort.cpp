
#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    for(int i=n-1;i>=0;i--b)
{
    for(int j=0;j<=i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            //swapping;
            int temp=arr[j+1];
            arr[j+1]=arr[j];
            arr[j]=temp;
        }
    }
}
}
int main()
{
    int n;
    cout<<"enter the range=";
    cin>>n;
    int arr[n];
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubble(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}