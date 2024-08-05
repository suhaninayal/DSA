#include<iostream>
using namespace std;
int duplicate(int arr[],int n)
{
    int b[40];
    int count=0;
    int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count=1;
                break;
                
            }
        }
       
        if(count==0)
        {
            b[i]=arr[i];
            //k++;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[i];
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
    duplicate(arr,n);
    
    return 0;

}