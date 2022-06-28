#include<stdio.h>
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int maxChunksToSorted(vector<int> &arr) {
    int n=arr.size();
    int mx=-1;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        if(mx==arr[i])
        {
            ans++;
        }
    }
return ans;
}
int main(){
    vector<int> arr= { 4, 3, 2, 6, 1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxChunksToSorted(arr)-1;
	return 0;
}