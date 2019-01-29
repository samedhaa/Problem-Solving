#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;



int main()
{
    int n,k,a,cnt=1;
    long long sum = 0;
    string s;
    set<pair<int,int> >st;
    priority_queue<int>pq;

    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    cin>>s;
    sum = 0;
    pq.push(arr[0]);
    for(int i=1;i<n;i++)
    {
       if(s[i] == s[i-1])
       {
           cnt++;
           pq.push(arr[i]);
       }
       else
       {
           int j = 0;
           while(!pq.empty())
           {
               if(j<k)
                sum+=pq.top();
               pq.pop();
               j++;
           }
            pq.push(arr[i]);
       }
    }
    int j = 0;
        while(j<k and !pq.empty())
        {
               if(j<k)
                sum+=pq.top();
               pq.pop();
               j++;
        }
    cout<<sum<<endl;
    return 0;
}
