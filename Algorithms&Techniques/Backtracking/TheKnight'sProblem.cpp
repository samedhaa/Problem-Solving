#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<bits/stdc++.h>

using namespace std;

const int N = 6;

#define ll long long

int visited[N][N];
int  ans[N][N];

void kn(int i,int j,int mov)
{
    if(i>N or j>N or i<1 or j<1 or visited[i][j])
        return;
    visited[i][j] = 1;
    ans[i][j] = mov;

    kn(i+2,j+1,mov+1);
    kn(i+1,j+2,mov+1);
    kn(i-2,j-1,mov+1);
    kn(i-1,j-2,mov+1);
    kn(i+2,j-1,mov+1);
    kn(i-1,j+2,mov+1);
    kn(i+1,j-2,mov+1);
    kn(i-2,j+1,mov+1);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    kn(1,1,1);
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
