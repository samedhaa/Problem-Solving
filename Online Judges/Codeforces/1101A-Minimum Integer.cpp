#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int l,r;
    int d;
    while(q--)
    {
        cin>>l>>r>>d;
        if(d<l)
            cout<<d<<endl;
        else
        {
            long long ans = r/d + 1;
            cout<<ans*d<<endl;
        }

    }
    return 0;
}
