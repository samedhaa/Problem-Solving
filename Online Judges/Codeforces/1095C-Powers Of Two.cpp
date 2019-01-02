#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include <unordered_set>
#include <queue>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    int c = 0;//__builtin_popcount(n);
    long long d = n;
    //vector<int>positions;
    //unordered_set<int>positions;
    priority_queue<int>positions;
    int i = 0;
    while((d >> i))
    {
        if((d >> i) & 1 == 1)
        {
            positions.push(pow(2,i));
        }
        i++;

    }
    c = positions.size();
    if(c == k)
    {
        cout<<"YES"<<endl;
        while(positions.size()>0)
        {
            cout<<positions.top()<<" ";
            positions.pop();
        }

    }
    else if(c>k or c > n)
        return cout<<"NO",0;
    else if(c<k)
    {
        int d = c;
        while(d<k)
        {
            int l = positions.top();
            positions.pop();
            l/=2;
            positions.push(l);
            positions.push(l);
            d++;
            if(l == 0)
                return cout<<"NO",0;
        }
        cout<<"YES"<<endl;
        while(positions.size()>0)
        {
            cout<<positions.top()<<" ";
            positions.pop();
        }
    }
    return 0;
}
