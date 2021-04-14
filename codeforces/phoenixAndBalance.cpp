#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int n,a,b;
    while(t--){
        cin>>n;
        // a=0;b=0;
        // if(n==2){
        //     cout<<2<<endl;
        //     continue;
        // }
        // for(int i=1;i<=n/2;i++){
        //     if(i%2==0){
        //         a+=pow(2,i)+pow(2,n-i+1);
        //     }
        //     else{
        //         b+=pow(2,i)+pow(2,n-i+1);
        //     }
        //     // cout<<"CHECK"<<a<<" "<<b;
        // }
        // // cout<<endl<<a<<" "<<b;
        // // cout<<"FINAL";
        // cout<<abs(a-b)<<endl;
        cout<<2*(pow(2,n/2)-1)<<endl;
    }
    
}