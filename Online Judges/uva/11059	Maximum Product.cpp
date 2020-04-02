#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1;
    while(cin>>n)
    {
        int a[n];
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            long long mult = 1;
            for(int j=i;j<n;j++)
            {
                mult*=(long long)a[j];
                if(mult > ans)ans = mult;
            }
        }
        cout<<"Case #"<<i<<": The maximum product is "<<ans<<".\n\n";
        i++;
    }
    return 0;
}


/*

*/
