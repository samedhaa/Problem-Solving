#include<iostream>
#include<algorithm>
#include<map>
using namespace std;

int memo[100000];
int fib(int n)
{
    if(n <= 1)
        return 1;
    if(memo[n] != 0)
        return memo[n];
    return memo[n] = fib(n-1) + fib(n-2);
}

int main()
{
    int n = 10;
    cout<<fib(n);
    return 0;
}
