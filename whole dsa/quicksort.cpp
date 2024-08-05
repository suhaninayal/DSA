//quick sort
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j)
    {
        while(arr[i]<=pivot && i<=high)
        {
            i++;
        }
        while(arr[j]>pivot && j>=low)
        {
            j--;
        }
        if(i<j)
        {
           // swap(arr[i],arr[j]);
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    //swap(arr[low],arr[j]);
    int q=arr[low];
    arr[low]=arr[j];
    arr[j]=q;
    return j;
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pindex=partition(arr,low,high);
        quicksort(arr,low,pindex-1);
        quicksort(arr,pindex+1,high);
    }
}
int main()
{
    int arr[50];
    int n;
    cin>>n;
    int high=n-1;
    int low=0;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"the sorted array=";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;
}