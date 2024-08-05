//cycle detect using ddfs
#include<bits/stdc++.h>
using namespace std;
bool cycledetect(int vertex,int parent,vector<int> adj[],vector<bool> &vis)
{
     queue<pair<int,int>>q;
     vis[vertex]=1;
     q.push(make_pair(0,-1));
     while(!q.empty())
     {
        int node=q.front().first;
        int parent=q.front().second;
        q.pop();
        for(int i=0;i<adj[node].size();i++)
        {
            if(parent==adj[node][i])
            continue;


        if(vis[adj[node][i]])
        return 1;

        vis[adj[node][i]]=1;
        q.push(make_pair(adj[node][i],node));
        }
     }
     return 0;
}
bool detect(vector<int> adj[],int v)
{
    vector<bool>vis(v,0);
    for(int i=0;i<v;i++)
    {
        if(!vis[i] && cycledetect(i,-1,adj,vis))
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
    vector<int> adj[5];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,3);
    addedge(adj,3,4);
    addedge(adj,4,1);

    bool ans=detect(adj,5);
    cout<<ans;
}