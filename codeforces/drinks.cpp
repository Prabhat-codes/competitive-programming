#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int a[n];
    int sum=0;
    while(i<n){
        cin>>a[i];
        sum=sum+a[i];
        i++;
    }
    // cout<<sum<<endl;
    double b=sum;
    b=b/n;
    
    cout<<b;
}