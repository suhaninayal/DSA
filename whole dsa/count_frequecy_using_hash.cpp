//count frequency using hash
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void frequency(int arr[],int n)
{
   unordered_map<int,int>map;
   for(int i=0;i<n;i++)
   {
      map[arr[i]]++;
   }
   //iterating in the map
   for(auto it:map)
   {
    cout<<it.first<<" "<<it.second;
   }

}
int main()
{
    int n;
    cout<<"enter the range=";
    cin>>n;
    int arr[n];
    cout<<"enter the elements=";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    frequency(arr,n);
    return 0;
}

