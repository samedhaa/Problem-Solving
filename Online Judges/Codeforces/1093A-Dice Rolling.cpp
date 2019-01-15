#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,x;
    cin>>t;

    while(t--)
    {
        int L = 7;
        cin>>x;
        if(x%L == 0)
            cout<<x/L<<endl;
        else
        {
            int ans = x / L;
            int mod = x % L;
            L--;
            while(L)
            {
                if(mod % L == 0)
                {
                    cout<<mod / L + ans<<endl;
                    break;
                }
                else
                {
                    L--;
                }
            }

        }
    }
    return 0;
}
