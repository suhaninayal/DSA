#include<bits/stdc++.h>
using namespace std;
void maxi(vector<int> &start,vector<int> &end,int n)
{
    int l;
    vector<pair<pair<int,int>,int>> a;
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        a.push_back({{end[i],start[i]},i+1});
    }
    sort(a.begin(),a.end());
    ans.push_back(a[0].second);//number meeting number;
    l=a[0].first.first;
    for(int i=1;i<n;i++)
    {
        if(a[i].first.second>l)
        {
            ans.push_back(a[i].second);
            l=a[i].first.first;
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}
int main()
{
    vector<int> start={1,3,0,5,8,5};
    vector<int> end={2,4,6,7,9,9};
    int n=6;
    maxi(start,end,n);
    return 0;
}