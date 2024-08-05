//detect cycle by bfs
#include<bits/stdc++.h>
using namespace std;

bool cycle(int vertex,vector<int> adj[],vector<bool> &vis)
{
    queue<pair<int,int>> q;
    vis[vertex]=1;
    q.push(make_pair(0,-1));
    while(q.empty())
    {
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(int j=0;j<adj[node].size();j++)
        {
            if(parent==adj[node][j])
            {
                continue;
            }
            if(vis[adj[node][j]]==1)
            
                return 1;
            
            vis[adj[node][j]]=1;
            q.push(make_pair(adj[node][j],node));
        
        }
}    
return 0;
}
bool iscycle(int v,vector<int> adj[])
{
    vector<bool> vis(v,0);
    for(int i=0;i<v;i++)
    {
        if(!vis[i] && cycle(i,adj,vis))
        {
            return 1;
        }
        return 0;
    }
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
    addedge(adj,1,2);
    addedge(adj,2,3);
    //addedge(adj,2,3);
    bool ans=iscycle(4,adj);
    cout<<ans;
}