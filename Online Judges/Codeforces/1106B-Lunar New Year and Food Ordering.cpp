#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <deque>
#include <iomanip>
#include <queue>
#include <functional>
using namespace std;
/**
bool sortVal(const auto a, const auto b)
{
    return (*a == *b);
}*/

#define ll long long
int main()
{
    ll n,m,t,d;
    ll ans=0;

    cin>>n>>m;

    ll a[n],c[n];
    //vector<pair<int*,pair<int,int*> > >vp(n);
    priority_queue<pair<ll,ll>> dq;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>c[i];
        dq.push({c[i]*-1,-i});
    }


    while(m--)
    {
        cin>>t>>d;t--;
        if(a[t] >= d)
        {
            cout<<(d * (c[t]))<<endl;
            a[t] -= d;
        }
        else
        {
            long long ans = (c[t]) * a[t];
            d-=a[t];
            a[t] = 0;
            while(d>0)
            {
                if(dq.empty())
                {
                    if(d != 0)
                        ans = 0;

                    break;
                }
                int t = -dq.top().second;
                int mn = min(d,a[t]);
                d-=mn;
                a[t]-=mn;
                ans += c[t] * mn;

                if(a[t] == 0 and d > 0)
                    dq.pop();
                else
                    break;

            }

            cout<<ans<<endl;
        }
    }

    return 0;
}
