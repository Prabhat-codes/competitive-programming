#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    while(n--){
        cin>>t;
        if(!(t%4)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}