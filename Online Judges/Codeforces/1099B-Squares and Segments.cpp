#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int sqr = ceil(sqrt(n));
    for(int i=1;i<=sqr;i++)
    {
        if(i*sqr >= n)
            return cout<<i+sqr<<endl,0;
    }
    return 0;
}
