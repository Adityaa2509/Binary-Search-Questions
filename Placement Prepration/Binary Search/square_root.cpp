#include<bits/stdc++.h>
using namespace std;
int solve(int n)
{
    if(n<0)return -1;
    if(n == 0)return 0;
    int lo = 0,hi = n;
    int ans = -1;
    while(lo<=hi)
    {
        int mid = lo + (hi-lo)/2;
        if(mid*mid == n)return mid;
        else if(mid*mid<=n)
        {
            ans=mid;
            lo = mid+1;
        }
        else hi = mid-1;
    }
    return ans;

}
double floor(int n,int base)
{
    double ans = base;
    double pi = 1;
    for(int i=0;i<4;i++)
    {   pi = pi/10;
        for(double j=ans;j*j<n;j+=pi)
        ans = j;
        
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int base = solve(n);
    cout<<floor(n,base)<<endl;
}