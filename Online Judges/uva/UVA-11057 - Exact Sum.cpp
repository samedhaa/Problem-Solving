#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n)
    {
        int money;
        map<int,bool>mp;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]] = 1;
        }
        cin>>money;
        int dif = 1e9,ans=0;
        for(int i=0;i<n;i++)
        {
            if(mp[money - a[i]] == 1)
            {
                if(abs(money - a[i] - a[i])<dif)
                {
                    dif = abs(money - a[i] - a[i]);
                    ans = a[i];
                }
            }
        }
        cout<<"Peter should buy books whose prices are "<<min(money-ans,ans)<<" and "<<max(money-ans,ans)<<".\n\n";

    }
    return 0;
}

/*
