#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int ans[t];
    for(int i=0;i<t;i++){
        int x,y,n;
        cin>>x>>y>>n;
        ans[i]=((n-y)/x)*x+y;
    }
    for(int i=0;i<t;i++){
        cout<<ans[i]<<endl;
    }
}