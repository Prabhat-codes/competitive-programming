#include<bits/stdc++.h>
using namespace std;
int main(){
    int to,n,r;
    cin>>to;
    int a[to];
    while(to--){
        cin>>n>>r;
        int a[n];
        int i=0;
        int sum_t=0;
        while(i<n){
            cin>>a[i];
            if(i!=0){
                sum_t+=a[i]-a[i-1];
            }
            i++;
        }
        // cout<<"SUMT "<<sum_t<<endl;
        i=0;
        int b[n];
        int sum_u=0;
        while(i<n){
            cin>>b[i];
            sum_u+=b[i];
            i++;
        }
        // cout<<"SUMU "<<sum_u<<endl;
        sum_u=sum_u-r*sum_t;
        cout<<sum_u<<endl;
    }
}

    