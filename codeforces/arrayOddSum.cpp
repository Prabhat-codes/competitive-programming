#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x,i,odd=0,even=0;
        for(i=0;i<n;i++){
            cin>>x;
            if(x%2==0)
            even++;
            else
            odd++;
        }
        if(odd==0||(odd==n&&n%2==0))
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

