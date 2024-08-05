//job sequencing
#include<bits/stdc++.h>
using namespace std; 
struct Job {
   int id; // Job Id 
   int dead; // Deadline of job 
   int profit; // Profit if job is over before or on deadline 
};
class Solution 
{
   public:
      bool static cmp(Job a, Job b) 
      {
         return (a.profit > b.profit);
      }
vector<int> jobsschedule(Job arr[],int n)
{
    int count=0;
    int pro=0;
    sort(arr,arr+1,cmp);
    int maxdeadline=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxdeadline=max(maxdeadline,arr[i].dead);
    }
    vector<int> schedule(maxdeadline+1,-1);
    for(int i=0;i<n;i++)
    {
        int currprofit=arr[i].profit;
        int currid=arr[i].id;
        int cdeadline=arr[i].dead;
    
    
    for(int k=cdeadline;k>0;k--)
    {
        if(schedule[k]==-1)
        {
            count++;
            pro+=currprofit;
            schedule[k]=currid;
            break;
        }
    }
    }
    vector<int> ans;
    ans.push_back(count);
    ans.push_back(pro);
    return ans;
}
};
int main()
{
   int n = 4;
    Job arr[n] = {{1,4,20},{2,1,10},{3,2,40},{4,2,30}};
    Solution ob;
   //function call
   vector<int> ans = ob.jobsschedule(arr, n);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
     return 0;

}