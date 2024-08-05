//mjhkjh
#include<bits/stdc++.h>
using namespace std;
int merge(int *arr,int low,int mid,int high)
{
    int temp[high-low+1];
    int i=low;
    int count=0;
    int j=mid+1;
    int k=0;
   
        while(i<=mid && j<=high)
        {
        if(arr[i]<=arr[j])
        {
            //count++;
            temp[k]=arr[i];
            k++;
            i++;
        }
        else
        {i
            
            count+=(mid-i+1);
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
    return count;
  
    

}
int mergesort(int *arr,int low,int high)
{
    int count=0;
    if(low<high)
    {
        int mid=(low+high)/2;
        count+=mergesort(arr,low,mid);
        count+=mergesort(arr,mid+1,high);
        count+=merge(arr,low,mid,high);
          
    }
    return count;
}
int main()
{
    //int arr[]={5,4,3,2,1};
    int arr[10];
    // int low,high;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   int res= mergesort(arr,0,n-1);
   cout<<res;
   
    return 0;
}