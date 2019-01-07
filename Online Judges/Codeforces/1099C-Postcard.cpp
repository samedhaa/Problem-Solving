#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;

    int candy = 0,snow = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '?')
            candy++;
        if(s[i] == '*')
            snow++;
    }
    int reallen = s.size() - candy - snow;

    if(reallen == k)
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i] != '*' and s[i] != '?')
                cout<<s[i];
        }
    }

    else if(reallen > k)
    {
        if(reallen - candy - snow > k)
            return cout<<"Impossible"<<endl,0;
        int cnt = reallen - k;
        string ans = "";
        for(int i=0;i<s.size()-1;i++)
        {
           if(cnt > 0 and (s[i+1] == '*' or s[i+1] == '?'))
           {
               cnt--;
               i++;
           }
           else if(cnt == 0 and (s[i+1] == '*' or s[i+1] == '?'))
               ans = ans + s[i],i++;
           else
               ans = ans + s[i];

        }
        if(s[s.size()-1] != '*' and s[s.size()-1] != '?')
            ans = ans + s[s.size()-1];
        cout<<ans<<endl;


    }
    else
    {
        if(snow == 0)
            return cout<<"Impossible"<<endl,0;

        string ans = "";
        int cnt = k-reallen;
        for(int i=0;i<s.size()-1;i++)
        {
            ans = ans + s[i];
            if(s[i+1] == '?')
                i++;
            else if(s[i+1] == '*' and cnt > 0)
            {
                while(cnt)
                    ans = ans + s[i],cnt--;
                i++;
            }
            else if(s[i+1] == '*' and cnt == 0)
                i++;
        }
        if(s[s.size()-1] != '*' and s[s.size()-1] != '?')
            ans = ans + s[s.size()-1];
        cout<<ans<<endl;
    }


    return 0;
}
