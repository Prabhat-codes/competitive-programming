#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    int p;
    int sum=0, count=0;
    while(n--){
    cin>>p;
    if(sum+p<0)
        count++;
    else 
        sum+=p;
    }
    cout<<count;
}
