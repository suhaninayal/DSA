#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={4,7,1,0};
    int n=4;
    int max=0;
    vector<int> v;
    for(int i=n-1;i>0;i--)
    {
        int temp=arr[i];
        if(temp>=max)
        {
            max=temp;
            v.push_back(max);
        }
      
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<" "<< v[i];
    }
}