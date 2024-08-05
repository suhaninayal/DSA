//detect in a directed graph

#include<bits/stdc++.h>
using namespace std;
bool detect(int node,vector<int> adj[],vector<bool> &path,vector<bool> &vis)
{
    
    vis[node]=1;
    path[node]=1;
    for(int i=0;i<adj[node].size();i++)
    {
        if(path[adj[node][i]])
        return 1;
        

        if(!vis[adj[node][i]] && detect(adj[node][i],adj,path,vis))
        return 1;
    
    }
    path[node]=0;
    return 0;
}
bool cycle(vector<int> adj[],int v)
{
   
    vector<bool>path(v,0);
     vector<bool>vis(v,0);
    for(int i=0;i<v;i++)
    {
        if(!vis[i] && detect(i,adj,path,vis))
        return 1;
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
    vector<int> adj[6];
    addedge(adj,0,1);
    addedge(adj,1,2);
   addedge(adj,2,4);
    addedge(adj,3,5);
    bool ans=cycle(adj,6);
    cout<<ans;
   
}
