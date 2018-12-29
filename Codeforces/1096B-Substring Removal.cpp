#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include <unordered_set>
#include <queue>

using namespace std;

int main()
{
    int n;
    long long ans = 1;
    cin>>n;
    string s;
    cin>>s;
    long long first = 1,last = 1,extralast=1,i=1;
    while(s[0] == s[i])
    {
        first++;
        i++;
    }
    i = n-2;
    while(s[n-1] == s[i])
    {
        last++;
        i--;
    }
    int j = i-1;

    while(s[i] == s[j])
    {
        extralast++;
        j--;
    }
    if(s[0] != s[n-1])
    {
        ans = (first+last+1);
    }
    else
    {
        ans = (first+1) * (last+1);
    }
    cout<<ans % 998244353;
    return 0;
}
