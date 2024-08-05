#include<iostream>
using namespace std;
void linear_search(int arr[],int n,int key)
{
    int comp=0;
    for(int i=0;i<n;i++)
    {
        int k=0;
        comp++;
        if(arr[i]==key)
        {
            
            k=1;
            //cout<<"element found="<<i;
        }
        if(k==1)
        {
             cout<<"the total no of compariosn"<<comp;
          //cout<<"element found at"<<i<<endl;
         
        }

    }

   
}
int main()
{
    int arr[30],n,key;
    cout<<"enter the n=";
    cin>>n;
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the key to be searched=";
    cin>>key;
    linear_search(arr,n,key);
    return 0;

}