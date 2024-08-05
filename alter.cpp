#include<bits/stdc++.h>
using namespace std;
vector<int> alter(vector<int> &arr,int n)
{
   int pos=0;
   int neg=1;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>0)
    {
        arr[pos]=arr[i];
        pos=pos+2;
    }
    else
    {
        arr[neg]=arr[i];
        neg=neg+2;
    }
   }
   return arr;
}
int main()
{
    vector<int> arr={1,2,-3,-4};
    int n=4;
    vector<int> ans=alter(arr,n);
    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i];
    }
   
    
} 