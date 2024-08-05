//topological sort

#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[],vector<bool> &vis,stack<int> &s)
{
    vis[node]=1;
    for(int i=0;i<adj[node].size();i++)
    {
          if(!vis[adj[node][i]])
          {
            dfs(adj[node][i],adj,vis,s);
          }
    }
    s.push(node);
}
vector<int> topo(vector<int> adj[],int v)
{
     vector<bool> vis(v,0);
     stack<int>s;
     for(int i=0;i<v;i++)
     {
        if(!vis[i])
        {
            dfs(i,adj,vis,s);
        }
     }
     vector<int> ans;
     while(!s.empty())
     {
        ans.push_back(s.top());
        s.pop();
     }
     return ans;
}

void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

int main()
{
    vector<int> adj[4];
    addedge(adj,0,1);
    addedge(adj,1,3);
   addedge(adj,2,3);
    addedge(adj,0,2);
    vector<int> ans=topo(adj,4);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
   
}
