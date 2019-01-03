#include<iostream>
#include<algorithm>
#include<map>
using namespace std;


int main()
{
    int n,a,m,value;
    cin>>n;
    vector<pair<int,int> >v;
    cin>>a;
    v.push_back(make_pair(1,a));
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        v.push_back(make_pair(v[i].second+1,v[i].second+a));
    }
    cin>>m;
    while(m--)
    {
        cin>>value;
        int fst = 0,lst = n;
        while(1)
        {
            int mid = (fst+lst)/2;
            if(value >= v[mid].first and value <= v[mid].second or (v[mid].first == value or v[mid].second == value))
            {
                cout<<mid+1<<endl;
                break;
            }
            if(value < v[mid].first)
                lst = mid;
            else if(value > v[mid].second)
                fst = mid;
        }
    }
    return 0;
}
