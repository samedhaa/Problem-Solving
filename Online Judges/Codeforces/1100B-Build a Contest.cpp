#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>
using namespace std;

map<int,int>numbers;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a;
    cin>>n>>m;
    set<int>st;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        st.insert(a);
        //cout<<i<<endl;
        if(numbers[a] > 0)
            numbers[a]++;
        else
            numbers[a] = 1;
        //cout<<numbers[a]<<" ";

        if(st.size() >= n)
        {

            set<int>::iterator it = st.begin();

            for(;it !=st.end();)
            {
                numbers[*it]--;

                if(numbers[*it]<1)
                    it = st.erase(it);
                else
                    ++it;

            }
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    return 0;
}
