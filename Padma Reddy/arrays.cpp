#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void create_array(int a[],int n){
    int i;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
}

void display_array(int a[],int n){
    int i;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
}

int insert_at_pos(int item,int a[],int n,int pos){
    if(pos>n||pos<0){
        cout<<"Invalid position";
        return 0;
    }
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=item;
    return n+1;
}

int delete_at_pos(int a[],int n,int pos){
    if(pos>n||pos<0){
        cout<<"Invalid position";
        return 0;
    }
    for(int i=pos+1;i<n;i++){
        a[i-1]=a[i];
    }
    return n-1;
}

void arr_sort(int a[]){
    for(int i=0;i<sizeof(a);i++){   
        for(int j=i;j<sizeof(a);j++){
            if(a[i]<a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<sizeof(a);i++){
        cout<<a[i]<<endl;
    }
    display_array(a,sizeof(a));
}

int b_search(int nums[], int o, int c, int target)
{
    int len = sizeof(nums);
    int mid = (o+c) / 2;
    int index=-1;
    if (nums[mid] == target)
    {
        return mid;                                         
    }
    else if(o>=c ){
        return -1;
    }
    else if (nums[mid] > target)
    {
        index=b_search(nums,o,mid-1,target);
        return index;
    }
    else if (nums[mid] < target)
    {
        index=b_search(nums,mid+1,c,target);
        return index;
    }
    else{
        return -1;
    }
}

int main() {
    int a[]={1,2,4,3,5,2};
    arr_sort(a);
   return 0;
}