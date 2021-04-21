#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c){
    return((a<=b)?((a<=c)?a:c):((b<=c)?b:c));
}
int main(){
    int n;
    cin>>n;
    int count=0;
    int no_of_leaders=1;
    // cout<<"HERE";
    while(no_of_leaders<n){
        // cout<<"JERE";
        int k=n-no_of_leaders;
        if(no_of_leaders%k==0){
            count++;
        }
        no_of_leaders++;
    }
    cout<<count;
}