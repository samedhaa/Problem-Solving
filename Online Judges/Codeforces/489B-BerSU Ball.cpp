#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

map<int,int>mp;
int main()
{
    int n;
    cin>>n;
    int b;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(mp[b] > 0)
            mp[b] += 1;
        else
            mp[b] = 1;
    }
    int m;
    cin>>m;
    int g[m];
    for(int i=0;i<m;i++)
        cin>>g[i];
    int ans=0;
    sort(g,g+m);
    for(int i=0;i<m;i++)
    {
        if(mp[g[i]-1] > 0)
            mp[g[i]-1]--,ans++;
        else if(mp[g[i]] > 0)
            mp[g[i]]--,ans++;
        else if(mp[g[i]+1] > 0)
            mp[g[i]+1]--,ans++;
    }
    cout<<ans<<endl;
    return 0;
}
