#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    int a[3]={0};
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
        a[arr[i]]++;
    }
    for(int i=0;i<3;){
        if(a[i]!=0){
            cout<<i<<" ";
            a[i]--;
        }
        else{
            i++;
        }
    }

    return 0;
}