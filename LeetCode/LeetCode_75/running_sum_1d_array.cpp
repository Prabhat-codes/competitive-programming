#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;
vector<int> runningSum(vector<int>& nums) {
    vector<int> res;
    int sum = 0;
    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        res.push_back(sum);
    }
    return res;
}

int main(){
    vector<int> a = {1,2,3,4};
    vector<int> b = runningSum(a);
    for(int i = 0; i < b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;
    return 0;
}

