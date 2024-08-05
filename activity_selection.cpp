#include<bits/stdc++.h>
using namespace std;
static bool cmp(pair<int,int> a,pair<int,int> b)
{
     return a.second<b.second;
}
int maxmeeting(vector<int> &start,vector<int> &end,int n)
{
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        pair<int,int>p=make_pair(start[i],end[i]);
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
    int count=1;
    int ansend=v[0].second;
    for(int i=1;i<n;i++)
    {
        if(v[i].first>ansend)
        {
            count++;
            ansend=v[i].second;
        }
    }
    return count;
}
int main()
{
    vector<int> start;
    int n;
    cin>>n;
    vector<int> end;
    for(int i=0;i<n;i++)ac
    {
        int s,e;
        cin>>s>>e;
        start.push_back(s);
        end.push_back(e);
    }
    int c=maxmeeting(start,end,n);
    cout<<c;
}