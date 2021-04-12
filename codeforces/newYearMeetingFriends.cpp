#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int ans;
    if(a[0]>=a[1]){
        if(a[0]>=a[2]){
            if(a[2]>=a[1]){
                ans=2;
                // cout<<"A";
            }
            else{
                ans=1;
                // cout<<"B";
            }
        }
        else{
            ans=0;
            // cout<<"C";
        }
    }
    else{
        if(a[1]>=a[2]){
            if(a[2]>a[0]){
                ans=2;
                // cout<<"D";
            }
            else{
                ans=0;
                // cout<<"E";
            }
        }
        else{
            ans=1;
            // cout<<"F";
        }
    }
    // cout<<ans<<" ";
    int sum=abs(a[0]-a[ans])+abs(a[1]-a[ans])+abs(a[2]-a[ans]);
    cout<<sum;
}