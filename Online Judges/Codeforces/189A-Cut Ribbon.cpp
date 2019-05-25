#include<bits/stdc++.h>

using namespace std;

int dp[4005][4005];
int a[5];
int change(int n,int m)
{
    if(n == 0)
        return 0;
    if(n < 0 || m <= 0)
        return -1e9;

    if(dp[n][m] != -1)
        return dp[n][m];

    return dp[n][m] = max(1 + change(n-a[m],m), change(n,m-1));

}
int main()
{
    int n;
    cin>>n;
    cin>>a[1]>>a[2]>>a[3];
    memset(dp,-1,sizeof(dp));
    cout<<change(n,3);
    return 0;
}
