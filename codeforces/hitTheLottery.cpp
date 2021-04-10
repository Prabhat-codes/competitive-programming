#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int c=n/100;
    sum+=c;
    n=n-c*100;
    c=n/20;
    sum+=c;
    n=n-c*20;
    c=n/10;
    sum+=c;
    n=n-c*10;
    c=n/5;
    sum+=c;
    n=n-c*5;
    c=n/1;
    sum+=c;
    n=n-c*1;
    cout<<sum;
}