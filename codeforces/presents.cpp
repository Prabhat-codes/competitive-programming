#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int a[n],b[n];
    while(i<n){
        cin>>a[i];
        b[a[i]-1]=i+1;
        i++;
    }
    i=0;
    while(i<n){
        cout<<b[i]<<" ";
        i++;
    }
}