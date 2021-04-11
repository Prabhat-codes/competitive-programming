#include<bits/stdc++.h>
using namespace std;
int composite(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 1;
        }
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int i=n;
    while(i--){
        // cout<<i;
        if(composite(i)&&composite(n-i)){
            if(i<n-i){
                cout<<i<<" "<<n-i;
            }
            else{
                cout<<n-i<<" "<<i;
            }
            return 0;
        }
    }
}