//union
#include<bits/stdc++.h>
using namespace std;
vector <int> findunion(int a1[],int a2[],int n,int m)
{
    vector<int> u;
    int i=0,j=0;
    
    while(i<n && j<m)
    {
        if(a1[i]<=a2[j])
        {
            if(u.size()==0 || u.back()!=a1[i])
            {
                u.push_back(a1[i]);
                i++;
            }
        }
        else
        {
            if(u.size()==0 || u.back()!=a2[j])
            {
                u.push_back(a2[j]);
                j++;
            }
        }
    }
    while(i<n)
    {
        if(u.back()!=a1[i])
        u.push_back(a1[i]);
        i++;

    }
    while(j<m)
    {
        if(u.back()!=a2[j])
        u.push_back(a2[j]);
        j++;
    }

return u;
}
int main()
{
     int n=5;
    int m=5;
  int a1[]={1,2,3,4,5};
  int a2[]={2,3,4,4,5};
   
    vector <int> uu=findunion(a1,a2,n,m);
    for(auto & x:uu)
    {
        cout<<x;
    }
    return 0;

}