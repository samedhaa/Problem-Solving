#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int n,x,y,a,ans=0;
    cin>>n>>x>>y;

    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(x >= a)
            ans++;
    }
    if(x > y)
        cout<<n;
    else
        cout<<ceil(ans/2.0);

    return 0;
}
