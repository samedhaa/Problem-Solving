#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main()
{
    int n,m,ans=0;
    cin>>n>>m;
    while(m!=n)
    {
        if((m&1) or m < n)
            m++;
        else
            m/=2;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
