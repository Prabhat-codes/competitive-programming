#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int arr[5]={4,3,5,1,2};
    int n=sizeof(arr)/sizeof(int);
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
        for(int i=0;i<5;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}