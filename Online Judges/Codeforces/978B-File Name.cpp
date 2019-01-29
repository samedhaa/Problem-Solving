#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>

using namespace std;

#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=1;i<n;i++)
    {
        if(s[i] != 'x')
            cnt=0;
        if(s[i] == s[i-1] and s[i] == 'x')
            cnt++;
        if(cnt >= 2)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
