#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int arr[16],n;
int solve(int i, int holder)
{
    if(i == n)
    {
        if(holder== 0 or holder % 360 == 0)
            return 1e8;
        else
            return -1e8;
    }

    return max(solve(i+1,holder + arr[i+1]), solve(i+1,holder - arr[i+1]));
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    if(solve(0,0) == 1e8)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
