#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int pivotIndex(vector<int>& nums) {
    int sum1=0;
    for(int i=0;i<nums.size();i++){
        sum1+=nums[i];
    }
    // cout<<"SUM"<<sum1<<endl;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        int a=accumulate(nums.begin(),nums.begin()+i,sum);
        int b=sum1-a-nums[i];
        if(a==b){
            return i;
        }
        // cout<<a<<" "<<b<<endl;
    }
    return -1;
    }

int main() {
   vector<int> a={1,7,3,6,5,6};
   cout<<pivotIndex(a);
// pivotIndex(a);
   return 0;
}