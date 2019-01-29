#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        int a = static_cast<int>(s[0]);
        int b = static_cast<int>(s[1]);
        if(n == 2 and a >= b)
            cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl<<2<<endl;
            cout<<s[0]<<" "<<s.substr(1,s.size())<<endl;

        }
    }
    return 0;
}
