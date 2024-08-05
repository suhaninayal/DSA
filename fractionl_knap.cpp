//fractional knapsack
#include<bits/stdc++.h>
using namespace std;
struct items
{
    int val;
    int wgt;

};
class Solution
{
  public:
  static bool cmp(pair<double,items> a,pair<double,items>b)
  {
    return a.first>b.first;
  }
  double fraction(int n,items arr[],int W)
  {
     int totalvalue=0;
    vector<pair<double,items>> v;
    for(int i=0;i<n;i++)
    {
        double perunit=(1.0*arr[i].val)/arr[i].wgt;
        pair<double,items> p=make_pair(perunit,arr[i]);
        v.push_back(p);
    }
    sort(v.begin(),v.end(),cmp);
   
    for(int i=0;i<n;i++)
    {
        if(v[i].second.wgt>W)
        {
            totalvalue+=W*v[i].first;
            W=0;
        }
        else
        {
            totalvalue+=v[i].second.val;
            W=W-v[i].second.wgt;
        }
    }
   return totalvalue;
  }
   
};
int main()
{
    int n=3;
    int W=50;
    items arr[n]={{60,10},{100,20},{120,30}};
   Solution obj;
   int val=obj.fraction(n,arr,W);
   cout<<val;

}