#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    map<char,int> mp;
    for(int i=0;i<n;i++)
    {
      mp[s[i]]++;
    }
    int mini=INT_MAX;
    int maxi=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            maxi=max(maxi,mp[s[i]],mp[s[j]]);
            mini=min(mini,mp[s[i]],mp[s[j]]);
            if(maxi-mini==1)
            {
            sum+=maxi-mini;
            }
        }
    }
    cout<<sum;
}
