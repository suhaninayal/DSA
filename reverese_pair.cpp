//merge sort
#include<iostream>
using namespace std;
int reverse_pair(int *arr,int low,int mid,int high)
{
   int count=0;
    int right=mid+1;
    for(int i=low;i<=mid;i++)
    {
        while(arr[i]>2*arr[right] && right<=high) right++;
        count+=(right-(mid+1));
        
    }
    return count;
}

int merge(int *arr,int low,int mid,int high)
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

int mergesort(int *arr,int low,int high)
{
    int count=0;
    if(low>=high) return count;
    
         int mid=(high+low)/2;
         count+=mergesort(arr,low,mid);
        count+= mergesort(arr,mid+1,high);
        count+=reverse_pair(arr,low,mid,high);
        merge(arr,low,mid,high);
    
    return count;
}

int team(int *arr,int n)
{
    return mergesort(arr,0,n-1);
}
int main()
{
    int arr[20],n,count;
    cout<<"enter the n=";
    cin>>n;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   count=team(arr,n);
   cout<<count;
    return 0;
}