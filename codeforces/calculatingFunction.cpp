#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int sum=0;
    while(i<=n){
        sum=sum+pow(-1,i)*i;
        i++;
    }
    cout<<sum;
}