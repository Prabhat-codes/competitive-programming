#include<iostream>
#include <bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,i=0;
    int k;
    cout<<"Kth element ";
    cin>>k;
    cout<<"Array length ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    sort(arr,arr+n);
    // for(i=0;i<n;i++)
    // {
    //     cout<<arr[i];
    // }
    
    cout<<"\nAnswer:"<<arr[k-1]<<endl;
    sort(arr,arr+n,greater<int>());
    // for(i=0;i<n;i++)
    // {
    //     cout<<arr[i];
    // }
    
    cout<<"\nAnswer:"<<arr[k-1];
    return 0;
}