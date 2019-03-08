#include <iostream>
#include <fstream>
#include <map>
#include <vector>
#include <math.h>
using namespace std;

vector<pair<int,int> >mp(100005);
int main()
{
    int n,a,posS=1, posD=1;
    long long sasha=0, dima=0;
    cin>>n;
    for(int i=0;i<n*2;i++)
    {
        cin>>a;
        if(mp[a].first == 0)
        {
            mp[a].first = i+1;
        }
        else
            mp[a].second = i+1;
    }

    for(int i=1;i<=n;i++)
    {
        sasha += abs(posS - mp[i].first);
        posS = mp[i].first;

        dima += abs(posD-mp[i].second);
        posD = mp[i].second;

    }
        cout<<sasha+dima<<endl;


    return 0;
}
