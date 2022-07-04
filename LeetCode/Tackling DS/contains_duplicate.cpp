#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool containsDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]==nums[i+1]){
            return 1;
        }
    }
    return 0;
}
int main() {
   vector<int> a={1,2,4,5};
   cout<<containsDuplicate(a)<<endl;   
   return 0;
}