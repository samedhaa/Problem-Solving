#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int n,m,k,ans=0;
    cin>>n>>m>>k;
    int x[m+1];
    for(int i=0;i<m+1;i++)
        cin>>x[i];
    for(int i=0;i<m;i++)
    {
        int flipped = x[i] ^ x[m];
        int d = 0;
        while(flipped)
        {
            d+=(flipped&1);
            flipped>>=1;
        }
        if(d<=k)
            ans++;
    }
    cout<<ans<<endl;
    return 0;
}
