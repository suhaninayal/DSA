#include<iostream>
using namespace std;
void merge(int *arr,int low,int mid,int high)
{
    int temp[high-low+1];
    int i=low;
    int j=mid+1;
    int k=0;
    while(i<=mid && j<=high)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        temp[k]=arr[j];
        k++;
        j++;
    }
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void mergesort(int *arr,int low,int high)
{
    if(low<high)
    {
    int mid=(low+high)/2;
    mergesort(arr,low,mid);
    mergesort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
}
int main()
{
    int arr[40],n;
    cout<<"enter the range=";
    cin>>n;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,n-1);
    cout<<"the sorted elements are=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}