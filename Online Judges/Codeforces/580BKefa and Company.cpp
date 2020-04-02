#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long d,m,f;
    cin>>n>>d;
    vector<pair<long long,long long> >v;
    for(int i=0;i<n;i++)
    {
        cin>>m>>f;
        v.push_back({m,f});
    }
    map<int,long long>cum;
    long long ans=0;
    vector<long long>a;

    sort(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        cum[i] = cum[i-1] + v[i].second;
        a.push_back(v[i].first);

    }

    for(int i=0;i<n;i++)
    {
        long long path = a[i] + d-1;
        int loc = upper_bound(a.begin(),a.end(),path) - a.begin() - 1;
        ans = max(ans,cum[loc]-cum[i-1]);
    }
    cout<<ans<<endl;
    return 0;
}


/*

*/
