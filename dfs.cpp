#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],vector<bool> &vis,vector<int> &ans)
{
    vis[node]=1;
    ans.push_back(node);
    for(int j=0;j<adj[node].size();j++)
    {
        if(!vis[adj[node][j]])
        {
            dfs(adj[node][j],adj,vis,ans);
        }
    }
}

vector<int> ddfs(vector<int>adj[],int v)
{
    vector<bool> vis(v,0);
    vector<int> ans;
    dfs(0,adj,vis,ans);
    return ans;
}
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main()
{
    vector<int> adj[5];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,4);
    addedge(adj,2,3);
    vector<int> ans=ddfs(adj,5);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
}