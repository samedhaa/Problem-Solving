    #include<iostream>
    #include<algorithm>
    #include<map>
    #include<math.h>
    using namespace std;

    int main()
    {
        string s;
        int n,l,r;
        cin>>s>>n;
        int ans[s.size()+1] = {0};
        for(int i=1;i<=s.size();i++)
        {
            ans[i+1] = ans[i];
            if(s[i] == s[i-1])
            {
                ans[i+1]++;
            }
        }
        for(int i=0;i<n;i++)
        {
            cin>>l>>r;
            cout<<ans[r]-ans[l]<<endl;
        }
        return 0;
    }
