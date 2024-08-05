//cycle detect in directed graph
#include<bits/stdc++.h>
using namespace std;
bool detectcycle(int node,vector<int> adj[],vector<bool> &path,vector<bool> &vis)
{
    path[node]=1;
    vis[node]=1;
    for(int i=0;i<adj[node].size();i++)
    {
        if(path[adj[node][i]])
        {
            return 1;
        }
        else
        {
        if(vis[adj[node][i]])  continue;

        if(detectcycle(adj[node][i],adj,path,vis)) return 1;
    }
    }
    path[node]=0;
    return 0;
}
void addedge(vector<int> adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool detect1(vector<int> adj[],int v)
{
    vector<bool> path(v,0);
    vector<bool> vis(v,0);
    for(int i=0;i<v;i++)
    {
     if(!vis[i] &&detectcycle(i,adj,path,vis))
     return 1;
}
}
int main()
{
    vector<int> adj[5];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,0,3);
    addedge(adj,1,3);
    addedge(adj,1,4);
   bool ans=detect1(adj,5);
   cout<<ans;

}