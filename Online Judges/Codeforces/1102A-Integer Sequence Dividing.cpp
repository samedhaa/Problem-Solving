#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long ans = n * (n+1)/2;
    cout<<ans % 2;
    return 0;
}
