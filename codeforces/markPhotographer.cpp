// Codeforces, Mark the Photographer: 2n people stand in two rows. Can every person
// in the back row be at least x taller than the person in front?
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
   int t,n,x;
   cin>>t;
   for(int i=0;i<t;i++){
    cin>>n>>x;
    int a[2*n];
    for(int i=0;i<2*n;i++){
        cin>>a[i];
    }
    sort(a,a+2*n);
    int flag=1;
    for(int i=0;i<n;i++){
        // cout<<a[i+n]-a[i]<<endl;
        if((a[i+n]-a[i])<x){
            // cout<<"HERE"<<a[i+n-1]<<" "<<a[i]<<"X"<<x;
            flag=0;
        }
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
   
   return 0;
}
