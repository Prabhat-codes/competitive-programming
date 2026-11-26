#include<iostream>
#include <bits/stdc++.h>
using namespace std;
struct Pair{
    int min;
    int max;
};
struct Pair checker()
{
    struct Pair minmax;
    
    int a;
    cin>>a;
    int arr[a];
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
    }
    if(a==1){
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    }
    else if(a==2){
        if(arr[1]>=arr[0]){
            minmax.max=arr[1];
            minmax.min=arr[0];
        }
        else
        {
            minmax.max=arr[0];
            minmax.min=arr[1];
        }
    }
    else{
        minmax.max=INT_MIN;
        minmax.min=INT_MAX;
        for (int i = 0; i < a; i++)
        {
            if(arr[i]>minmax.max){
                minmax.max=arr[i];
            }
            else if(arr[i]<minmax.min){
                minmax.min=arr[i];
            }
        }
        
    }

    
    return minmax;
}
int main(){
    struct Pair result=checker();
    cout<<result.max<<" "<<result.min;
    return 0;
}