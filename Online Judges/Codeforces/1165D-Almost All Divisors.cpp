#include<bits/stdc++.h>

using namespace std;

map<int,bool>mp;
void Divisors(long long n)
{
    vector<int>v;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                mp[i] = 1;

            else
                mp[n/i] = 1,mp[i] = 1;
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n+2];
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        sort(a+1,a+n+1);
        mp.clear();
        Divisors(a[1] * a[n]);
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(mp[a[i]])
                cnt++;
        }
        if(cnt == mp.size() - 2)
            cout<<a[1] * a[n]<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}
