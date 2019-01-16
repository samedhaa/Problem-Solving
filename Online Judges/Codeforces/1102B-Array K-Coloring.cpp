#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<bits/stdc++.h>

using namespace std;
#define ll long long

map<int,int>mp;
int visited[5005][5005];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,mx=0;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        mx = max(mx,mp[a[i]]);
    }
    if(mx > k)
        return cout<<"NO",0;
    int holder = k;
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(visited[a[i]][holder] == 0 and holder > 0)
            {
                visited[a[i]][holder] = 1;
                cout<<holder<<" ";
                holder--;
                break;
            }
            else if(visited[a[i]][j] == 0)
            {
                visited[a[i]][j] = 1;
                cout<<j<<" ";
                break;
            }
        }

    }
    return 0;
}
