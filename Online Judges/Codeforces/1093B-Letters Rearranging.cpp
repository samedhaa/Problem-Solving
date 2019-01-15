#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
#include<set>
#include<bits/stdc++.h>

using namespace std;

int palindrome(string s)
{
    set<int>st;
    int mx = 0;
    int n = s.size();
    for(int i=0;i<=n/2;i++)
    {
        st.insert(s[i]);
        st.insert(s[n-i-1]);
        if(s[i] != s[n-i-1])
        {
            return -1;
        }
    }
    return st.size();
}
int main()
{
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int res = palindrome(s);
        if(res>1)
        {
            cout<<s[s.size()-1];
            cout<<s.substr(0,s.size()-1)<<endl;
        }
        else if(res==1)
            cout<<-1<<endl;
        else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}
