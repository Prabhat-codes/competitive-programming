#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int a[n];
    while(i<n){
        int p,q;
        cin>>p>>q;
        if(p<=q){
            a[i]=q-p;
            i++;
            continue;
        }
        int div=p/q;
        // cout<<div<<" ";

        int mul=q*div;
        int mulplus=(q)*(div+1);
        int r=abs(p-mul);
        int t=abs(p-mulplus);
        cout<<r<<" "<<t;
        cout<<mul<<" ";
        a[i]=r>t?r:t;
        // cout<<a[i]<<endl;
        i++;
    }
    i=0;
    while(i<n){
        cout<<a[i]<<endl;
        i++;
    }
}