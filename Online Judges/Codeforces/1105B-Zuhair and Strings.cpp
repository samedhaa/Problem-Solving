#include <iostream>
#include <map>
using namespace std;

map<char,int>mp;

int main()
{
    int n,k,ans=0;
    string s;
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        int cnt=0;
        char chr = s[i];
        while(s[i] == chr)
        {
            cnt++;
            i++;
        }
        if(cnt > 0)
            i--;
        if(cnt>=k)
        {
            mp[chr] += (cnt/k);
            ans = max(ans,mp[chr]);
        }
    }

    cout<<ans<<endl;

    return 0;
}
