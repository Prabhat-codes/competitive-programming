#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x,y,xr,yr,d;
    cin>>t;
    while(t--){
        cin>>x>>y>>xr>>yr>>d;
        int xd=x/xr;
        int yd=y/yr;
        // cout<<xd<<" "<<yd<<endl;
        int min=(xd<=yd)?xd:yd;
        // cout<<min<<endl;
        if(min>=d){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}