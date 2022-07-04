#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxSubarray(vector<int>& nums){
    //Sliding window style 
    int n=nums.size();
    int sum=0,max=0;
    if(n==1){
            return *nums.begin();
        }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            // cout<<nums[j]<<" ";
            sum+=nums[j];
        }
        // cout<<endl;
        if(sum>max){
            max=sum;
        }
        sum=0;
    }
    return max;
}

int main() {
   vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};
   cout<<"MAX"<<maxSubarray(nums)<<endl;

   
   return 0;
}