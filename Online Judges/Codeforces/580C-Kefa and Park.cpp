//problem link : https://codeforces.com/contest/580/problem/C

#include<bits/stdc++.h>

using namespace std;

int m,ans;
vector<vector<int> >adj(100005);
map<int,bool>vis,cats;

void dfs(int u, int cat)
{
    if(vis[u] == 1)return;
    vis[u] = 1;

    if(cat <= m && u!=1 && adj[u].size() == 1){ans++;}

    for(auto v : adj[u])
    {
        int ct = cat;
        if(cats[v] || ct > m){ct++;}
        else{ct=0;}
        dfs(v,ct);
    }
}

int main()
{

    int n;
    scanf("%d %d",&n,&m);
    int a;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a);
        cats[i] = (bool)a;
    }
    int x,y;
    for(int i=1;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1,cats[1]);
    printf("%d",ans);
    return 0;
}
