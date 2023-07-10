#include<bits/stdc++.h>
using namespace std;
int rec(int n)
{
    if(n<=1)return n;
    return rec(n-1)+rec(n-2);
}
int memo(int n,vector<int>& dp)
{
    if(n<=1)return n;
    if(dp[n] != -1)return dp[n];
    dp[n] =  memo(n-1,dp)+memo(n-2,dp);
    return dp[n];
}
int tabu(int n)
{
    vector<int> dp(n+1,-1);
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}
int space_optimization(int n)
{
    if(n<=1)return n;
    int a=0,b=1;
    for(int i=2;i<=n;i++)
    {
        int c = a+b;
        a = b;
        b = c;
    }
    return b;
}
int main()
{
    int n;
    cin>>n;

    cout<<rec(n)<<endl;
    vector<int>dp(n+1,-1);
    cout<<memo(n,dp)<<endl;
    cout<<tabu(n)<<endl;
    cout<<space_optimization(n)<<endl;
}