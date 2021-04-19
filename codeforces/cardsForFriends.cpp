#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,n,x=1;
        cin>>w>>h>>n;
        while(w%2==0){
            w/=2;
            x*=2;
        }
        while(h%2==0){
            h/=2;
            x*=2;
        }
        if(x>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
