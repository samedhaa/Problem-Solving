#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    int mn = min(k2,min(k5,k6));
    int ans = 256 * mn;
    k2 -=mn;
    ans = ans + 32 * min(k2,k3);
    cout<<ans<<endl;
    return 0;
}
