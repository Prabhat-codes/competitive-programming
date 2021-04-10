#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long b[n];
    long long c=n;
    while(n--){
        long long a;
        cin>>a;
        b[n]=(a-1)/2;
    }
    while(c--){
        cout<<b[c]<<endl;
    }
}