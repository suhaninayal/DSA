#include<bits/stdc++.h>
using namespace std;
void left(vector<int> &arr,int n,int k)
{
    int temp[5];
   for(int i=0;i<k;i++)
   {
    temp[i]=arr[i];
   }
   for(int i=0;i<n;i++)
   {
    arr[i]=arr[k+i];
   }
   for(int i=n-k;i<n;i++)
   {
    arr[i]=temp[i-n+k];

   }
   for(int i=0;i<n;i++)
   {
    cout<<arr[i];
   }

}
int main()
{
    vector<int> arr={1,2,3,4,5,6,7};
    int n=7;
    int k=2;
    left(arr,n,k);
    return 0;
}