#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;
    int a[n];
    int i=0;
    while(i<n){
        cin>>a[i];
        i++;
    }
    sort(a, a+n);
    i=0;
    int counter=0;
    while(i<n){
        if(a[i]==a[i+1]){
            counter++;
        }
        i++;
    }
    cout<<counter;
}