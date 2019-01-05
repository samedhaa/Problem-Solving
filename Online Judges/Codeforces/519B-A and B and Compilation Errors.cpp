#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,a;
    cin>>n;
    long long sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum1+=a;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>a;
        sum2+=a;
    }
    cout<<sum1-sum2<<endl;
    sum1 = 0;
    for(int i=0;i<n-2;i++)
    {
        cin>>a;
        sum1+=a;
    }
    cout<<sum2-sum1<<endl;

    return 0;
}
