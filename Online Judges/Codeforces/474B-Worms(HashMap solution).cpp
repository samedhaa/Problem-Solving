#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int mp[1000006];
int main()
{
    int n,a,m,value,k=1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        for(int j = k;j<=k+a;j++)
            mp[j] = i+1;
        k = k + a;
    }
    cin>>m;
    while(m--)
    {
        cin>>value;
        cout<<mp[value]<<endl;
    }
    return 0;
}
