#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={1,4,2,4,5};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            int min=i;
            if(arr[j]>arr[min]){
                min=j;
            }
                int temp=arr[min];
                arr[min]=arr[j];
                arr[j]=temp;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}