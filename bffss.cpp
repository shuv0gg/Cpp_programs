#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>v[n+5];
    while(e--)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }
    vector<bool>vis(n+5,0);
    int src=1;
    vis[src]=1;
    queue<int>q;
    q.push(src);
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        cout<<cur<<" ";
        for(int i=0;i<v[cur].size();i++)
        {
            int adj=v[cur][i];
            if(vis[adj]==0)
            {
                vis[adj]=1;
                q.push(adj);
            }
        }
    }
}
