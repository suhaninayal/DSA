#include <bits/stdc++.h> 
int getLongestSubarray(vector<int>& nums, int k)
{

    unordered_map<int, int>Map;
    int n=nums.size();
    if(n==0)
    {
      return 0;
    }
   
    int sum = 0;
    int i=0;
    int count = 0;
    while(i<n)
    {
   sum=sum+nums[i];
   if (sum == k) 
   {
     count = count + 1;
   }
   if (Map.find(sum - k) != Map.end()) 
   {
     count = count + Map[sum - k];
   }
        Map[sum]+=1;
        i=i+1;
    }

    return count;


}