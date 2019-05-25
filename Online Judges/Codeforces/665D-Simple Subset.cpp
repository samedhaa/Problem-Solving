#include<bits/stdc++.h>

using namespace std;

bool prime(int n)
{
    int sqr = sqrt(n);
    for (int p=2; p<=sqr; p++)
    {
        if(n%p==0)
            return 0;
    }
    return 1;
}
map<int,int>mp;
int szans;

int main()
{
    vector<int>ans,v;
    vector<int>a;
    int n,st,sz;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>st;
        mp[st]++;
        if(mp[st]==1)
            a.push_back(st);
    }
    n = a.size();
    for(int i=0;i<n;i++)
    {
        v.push_back(a[i]);
        if(a[i] == 1)
            sz = mp[a[i]];
        else
            sz = 1;
        for(int j=0;j<n;j++)
        {
            if(i==j)
                continue;

            if(prime(a[i] + a[j]))
            {

                bool f = true;
                for(int k=0;k<v.size();k++)
                {
                    if(!prime(a[j] + v[k]))
                    {
                        f = false;
                        break;
                    }
                }

                if(f)
                {
                    v.push_back(a[j]);
                    sz++;
                }
            }
        }
        if(szans < sz)
        {
            szans = sz;
            ans = v;
        }
        v.clear();
    }
    cout<<szans<<endl;
    for(int i=0;i<ans.size();i++)
    {
        if(mp[ans[i]] > 1 && ans[i] == 1)
        {
            while(mp[ans[i]])
            {
            cout<<ans[i]<<" ";
            mp[ans[i]]--;
            }
        }
        else
            cout<<ans[i]<<" ";
    }
    return 0;
}
