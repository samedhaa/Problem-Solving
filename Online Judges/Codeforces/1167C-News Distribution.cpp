#include<bits/stdc++.h>

using namespace std;

int dis[500005],sz[500005];

int disfind(int u)
{
    if(dis[u] == u)return u;
    return dis[u] = disfind(dis[u]);
}

void disunion(int u,int v)
{
    u = disfind(u);
    v = disfind(v);
    if(u != v)
    {
        dis[v] = u;
        sz[u] += sz[v];
    }
}
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        dis[i] = i;
        sz[i] = 1;
    }
    for(int i=0;i<m;i++)
    {
        int k,root,r;
        scanf("%d",&k);
        if(!k)continue;
        scanf("%d",&root);
        for(int j=0;j<k-1;j++)
        {
            scanf("%d",&r);
            disunion(root,r);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<sz[disfind(i)]<<" ";
    }
    return 0;
}
