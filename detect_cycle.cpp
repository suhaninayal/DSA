//detect a cycle in a graph by  dfs
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool detect(int node,int parent,vector<int> adj[],vector<bool>vis)
{
    vis[node]=1;
    for(int j=0;j<adj[node].size();j++)
{
    if(parent==adj[node][j])
    
        continue;
    
    if(vis[adj[node][j]]==1)
    
        return 1;
    
    if(detect(adj[node][j],node,adj,vis)) return 1;
}
return 0;
}
bool cycle(int v,vector<int> adj[])
{
    vector<bool>vis(v,0);
    for(int i=0;i<v;i++)
    {
        if(!vis[i] && detect(i,-1,adj,vis)) return 1;
    }
    return 0;
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
    addedge(adj,0,2);
    addedge(adj,2,3);
    addedge(adj,3,4);
    bool ans=cycle(4,adj);
    cout<<ans;
}
