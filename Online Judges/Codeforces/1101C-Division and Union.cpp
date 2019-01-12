#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    int t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<int,pair<int,int> > >vp;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            vp.push_back(make_pair(a,make_pair(b,i)));
        }
        sort(vp.begin(),vp.end());
        int min1=1e9,
            min2 = 1e9,
            max1 = -1e9,
            max2 = -1e9;
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            int a = vp[i].first;
            int b = vp[i].second.first;
            int pos = vp[i].second.second;
            //

            if(((a >= min1 and a<=max1) or (b >= min1 and b <= max1)) or (min1 == 1e9))
            {
                min1 = min(a,min1);
                max1 = max(b,max1);
                mp[pos] = 1;
            }
            else if(((a >= min2 and a<=max2) or (b >= min2 and b <= max2)) or (min2 == 1e9))
            {
                min2 = min(a,min2);
                max2 = max(b,max2);
                mp[pos] = 2;
            }
            else
            {
                min1 = min(a,min1);
                max1 = max(b,max1);
                mp[pos] = 1;
            }
        }
        if(min1 == 1e9 or min2 == 1e9)
            cout<<-1;
        else
            for(int i=0;i<n;i++)
                cout<<mp[i]<<" ";
        cout<<endl;
    }
    return 0;
}
