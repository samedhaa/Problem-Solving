#include<iostream>
#include<algorithm>
#include<map>
#include<math.h>
#include<queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    int count1 = 0,countm1=0,mx =0;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i] == 1)
            count1++;
        else
            countm1++;
    }

    for(int i=0;i<n;i++)
    {
        int e = count1,
            s = countm1;
        if(arr[i] == 1)
            e++;
        else
            s++;
        for(int j=i;j<n;j+=k)
        {
            if(arr[j] == 1)
                e--;
            else
                s--;
        }
        for(int j=i;j>=0;j-=k)
        {
            if(arr[j] == 1)
                e--;
            else
                s--;
        }
        mx = max(mx,abs(e-s));
    }

    cout<<mx<<endl;

    return 0;
}
