#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int l, int m, int r){
    int nl=m-l+1;
    int rl=r-m;
    int larr[nl];
    int rarr[rl];
    for(int i=0;i<nl;i++){
        larr[i]=arr[l+i];
    }
    for(int i=0;i<rl;i++){
        rarr[i]=arr[m+i+1];
    }    
    int i,j,k;
    i=0;j=0;k=l;
    while(i<nl && j<rl){
        if(larr[i]<=rarr[j]){
            arr[k]=larr[i];
            i++;
        }
        else{
            arr[k]=rarr[j];
            j++;
        }
        k++;
    }
    while(i<nl){
        arr[k]=larr[i];
        i++;k++;
    }
    while(j<rl){
        arr[k]=rarr[j];
        j++;k++;
    }
}
void mergesort(int *arr, int l, int r){
    if(l<r){
        int m=l+(r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}
int main()
{
    int arr[5]={3,2,4,5,1};
    mergesort(arr,0,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}