#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int i=1;
    int counter=0;
    while(i<=d){
        if(i%k==0||i%l==0||i%m==0||i%n==0){
            counter++;
        }
        i++;
    }
    cout<<counter;
}
    