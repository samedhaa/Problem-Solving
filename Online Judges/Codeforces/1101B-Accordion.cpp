#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ans = 0,ans2=0,i=0,j=0,n=s.size();
    for(int k = 0;k<n;k++)
    {
        if(ans == 0 and s[k] == '[')
            ans++;
        else if(ans == 1 and s[k] == ':')
        {
            ans++;
            i = k;
        }

        if(ans2 == 0 and s[n-k-1] == ']')
            ans2++;
        else if(ans2 == 1 and s[n-k-1] == ':')
        {
            ans2++;
            j = n-k-1;
        }
    }
    if(ans < 2 or ans2 < 2 or i>=j)
        return cout<<-1,0;
    
    i++;
    while(i<j)
    {
        if(s[i] == '|')
            ans++;
        i++;
    }
    cout<<ans+ans2<<endl;
    return 0;
}
