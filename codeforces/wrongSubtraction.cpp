#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int i=0;
    while(i<k){
    if(n%10!=0){
        --n;
    }
    else
    n=n/10;
    i++;
    }
    cout<<n;
}