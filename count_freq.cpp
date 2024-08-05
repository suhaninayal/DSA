#include<iostream>
using namespace std;



int f(int number,int a[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==number)
        {
            count++;
        }
        

    }
   return count;
}
int main()

{
     int a[60];
    int n,number,count=0;
   
    cout<<"enter the range";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    count=f(4,a,n);
    cout<<count;
    return 0;
}