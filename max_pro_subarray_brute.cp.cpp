#include<iostream>
using namespace std;
void product(int arr[],int n)
{
    int len=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int pro=1;
            for(int k=i;k<=j;k++)
            {
                pro=pro*arr[k];
                 if(len<pro)
            {
                len=pro;
            }
            }
           
        }
    }
    cout<<len;
}
int main()
{
    int arr[30],n;
    cout<<"enter the n=";
    cin>>n;
    cout<<"Enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    product(arr,n);
    //cout<<len;
    return 0;

}