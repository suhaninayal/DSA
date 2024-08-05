#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={4,6,2,6,4};
    int n=5;
    int l=6;
    int xori=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
         
        for(int j=i;j<n;j++)
        {
           xori=xori^arr[j];
           
        
        if(xori==l)
        {
            count++;
        }
    }
    }
    
    cout<<count;
    
    
}