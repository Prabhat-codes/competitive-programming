#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int b_search(vector<int>& nums, int o, int c, int target)
{
    int len = nums.size();
    int mid = (o+c) / 2;
    int index=-1;
    if (nums[mid] == target)
    {
        return mid;                                         
    }
    else if(o>=c ){
        return -1;
    }
    else if (nums[mid] > target)
    {
        index=b_search(nums,o,mid-1,target);
        return index;
    }
    else if (nums[mid] < target)
    {
        index=b_search(nums,mid+1,c,target);
        return index;
    }
    else{
        return -1;
    }
}

int search(vector<int>& nums,int target){
    int ans=b_search(nums,0,nums.size()-1,target);
    if(ans==-1){
        return ans;
    }
    else{
        return (ans+1);
    }
}

int main()
{
    vector<int> nums = {-1,0,3,5,9,12};
    int target = 2;
    cout<<search(nums, target);
    return 0;
}