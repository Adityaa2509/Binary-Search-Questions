#include<iostream>
#include<vector>
using namespace std;
int bs(vector<int>nums,int target)
{
    int lo=0,hi=nums.size()-1;
    int mid = lo+(hi-lo)/2;
    while(lo<=hi)
    {
        cout<<mid<<" -->>  "<<nums[mid]<<endl;
        if(nums[mid] == target)
        {
            return mid;
        }
        if(nums[mid]>target)hi = mid-1;
        else lo = mid+1;
        mid = lo+(hi-lo)/2;
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    vector<int>nums(n);

    for(int i=0;i<n;i++)cin>>nums[i];
    int tar;
    cin>>tar;
    cout<<bs(nums,tar)<<endl;

}