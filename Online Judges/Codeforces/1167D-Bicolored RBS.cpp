#include<bits/stdc++.h>

using namespace std;

int a[200005];
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int r=0,b=0;
    for(int i=0;i<n;i++)
    {
        if(s[i] == '(')
        {
            if(r < b)
            {
                r++;
                a[i] = 0;
            }
            else
            {
                b++;
                a[i] = 1;
            }
        }
        else
        {
            if(r > b)
            {
                r--;
                a[i] = 0;
            }
            else
            {
                b--;
                a[i] = 1;
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i];
    return 0;
}
