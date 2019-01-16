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

    int n,d,ans=0;
    cin>>n>>d;
    string s;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        int j = i + d;
        while(s[j] != '1' && j>=i)
            j--;

        if(j==i && i!=n-1)
            return cout<<-1,0;
        i=j;
        ans++;
        if(i==n-1)
            break;
        else
            i--;
    }
    cout<<ans<<endl;
    return 0;
}
