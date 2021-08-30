#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int traverse(int *arr,int l, int r){

}
void quicksort(int *arr, int l, int r){
    if(l<r){
        int p=traverse(arr,l,r);
        
        quicksort(arr,l,p-1);
        quicksort(arr,p+1,r);
    }
}
int main()
{
    int arr[5]={3,2,4,5,1};
    quicksort(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}