#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long k,x;
        cin>>k>>x;
        cout<<(k-1) *9 + x<<endl;
    }
    return 0;
}
