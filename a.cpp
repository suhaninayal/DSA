#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(vector<int> adj[],int v)
{
    queue<int> q;
    vector<int> ans;
    vector<bool> vis(v,0);
    q.push(0);
    vis[0]=1;
    while(!q.empty())
    {
        int node=q.front();
        q.pop();
        ans.push_back(node);
        for(int i=0;i<adj[node].size();i++)
        {
            if(!vis[adj[node][i]])
            {
                vis[adj[node][i]]=1;
            }
            q.push(adj[node][i]);
        }
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
    vector<int> adj[5];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,3,4);
   vector<int> ans=bfs(adj,5);
   for(int i=0;i<ans.size();i++)
   {
    cout<<ans[i];
   }
}