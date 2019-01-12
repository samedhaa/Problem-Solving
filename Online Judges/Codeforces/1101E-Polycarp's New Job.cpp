#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char a;
    long long n,x,y,h=0,w=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>x>>y;
        if(a == '+')
        {
            if(x > y)
                swap(x,y);

            h=max(x,h);
            w=max(y,w);
        }
        else{
        if((h<=x and w<=y) or (h<=y and w<=x))
                puts("YES");
            else
                puts("NO");
        }
    }


    return 0;
}
