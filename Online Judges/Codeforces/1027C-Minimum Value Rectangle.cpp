#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    scanf("%d",&t);

    while(t--)
    {
        int n,a;
        cin>>n;
        int ans=0,ans2=0;
        long double mn=1e14,p,s;
        map<long double,int>mp;
        vector<long double>v;

        for(int i=0;i<n;i++)
        {
            scanf("%d",&a);
            mp[a]++;
            if(mp[a] == 2)v.push_back((long double)a);
        }

        sort(v.begin(),v.end());

        for(int i=0;i<v.size()-1;i++)
        {
            p = ((long long)(v[i] + v[i+1])<<1);p*=p;
            s = v[i] * v[i+1];

            if(p/s < mn)
            {
                mn = p/s;
                ans=v[i];
                ans2=v[i+1];
            }

            if(mp[v[i]]>=4)
            {
                p = ((long long)(v[i] + v[i])<<1);p*=p;
                s = v[i] * v[i];
                if(p/s < mn)
                {
                    mn = p/s;
                    ans=v[i];
                    ans2=v[i];
                }
            }
        }
        int i = v.size()-1;
        if(mp[v[i]]>=4)
        {
            p = ((long long)(v[i] + v[i])<<1);p*=p;
            s = v[i] * v[i];//

            if(p/s < mn)
            {
            mn = p/s;
            ans=v[i];
            ans2=v[i];
            }
        }
        printf("%d %d %d %d",ans,ans,ans2,ans2);
        puts("");
    }
    return 0;
}
