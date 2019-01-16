#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    ll b[n+1],a[n+1],mn=0,mx=1e18;
    for(int i=1;i<=n/2;i++)
        cin>>b[i];

    for(int i=1;i<=n/2;i++)
    {
        a[i] = max(mn,b[i]-mx);
        a[n-i+1] = b[i] - a[i];
        mx = a[n-i+1];
        mn = a[i];
    }
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
