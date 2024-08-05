#include<bits/stdc++.h>
using namespace std;
void dup(int arr[],int n)
{
    int flag;
    for(int i=1;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i;
        }
    }
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