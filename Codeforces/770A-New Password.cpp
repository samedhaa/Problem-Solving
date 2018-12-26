#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,k;
    char c = 'a';
    cin>>n>>k;
    n-=k;
    for(int i=1;i<=k;i++)
    {
        cout<<c;
        c = 'a' + i;
    }
    for(int i=1;i<=n;i++)
    {
        if(i&1)
            cout<<'a';
        else
            cout<<'b';
    }

    return 0;
}
