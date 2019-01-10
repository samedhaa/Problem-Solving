#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

map<char,int>mp,d;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    mp['0'] = 0;
    mp['1'] = 0;
    mp['2'] = 0;
    for(int i=0;i<n;i++)
    {
        mp[s[i]]++;
    }

    for(int i=n-1;i>=0;i--)
    {
        if(mp[s[i]] <= n/3)
            continue;
        else
        {

            if(s[i] == '0')
            {

                if(mp['2'] < n/3)
                {
                    mp[s[i]]--;
                    s[i] = '2';
                    mp['2']++;
                }
                else if(mp['1'] < n / 3)
                {
                    mp[s[i]]--;
                    s[i] = '1';
                    mp['1']++;
                }
            }
            else if(s[i] == '1')
            {
                if(mp['2'] < n/3)
                {
                    mp[s[i]]--;
                    s[i] = '2';
                    mp['2']++;
                }
            }


        }
    }
    for(int i=0;i<n;i++)
    {
        if(mp[s[i]] <= n/3)
            continue;
        else
        {
            if(s[i] == '1')
            {
                if(mp['0'] < n/3)
                {
                    mp[s[i]]--;
                    mp['0']++;
                    s[i] = '0';
                }

            }
            else
            {
                if(mp['0'] < n/3)
                {
                    mp['0']++;
                    mp[s[i]]--;
                    s[i] = '0';
                }
                else
                {
                    mp['1']++;
                    mp[s[i]]--;
                    s[i] = '1';
                }
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
