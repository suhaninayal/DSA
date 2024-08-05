#include<iostream>
using namespace std;
void rotate(int arr[],int n,int k)
{
    int temp;
    for(int i=0;i<n;)
    {
       
        for(int j=i+1;j<n;j++)
        {
            if(i<k)
            
            temp= arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
        }
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