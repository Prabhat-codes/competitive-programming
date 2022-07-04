#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> &prices)
{
    int length=prices.size();
    int min=prices[0];
    int op=0;
    int p=0;
    for(int i=0;i<length;i++){
        if(prices[i]<min){
            min=prices[i];
        }
        p=prices[i]-min;
        if(op<p){
            op=p;
        }
    }
    return op;
}

int maxProfitShorter(vector<int>& prices){
    int mini=INT_MAX,maxPro=0;
    for(int i=0;i<prices.size();i++){
        mini=min(mini,prices[i]);
        maxPro=max(maxPro,prices[i]-mini);
    }
    return maxPro;
}

int main()
{
    vector<int> a = {7,1,5,3,6,4};
    cout<< maxProfit(a);
    return 0;
}