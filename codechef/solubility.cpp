#include<bits/stdc++.h>
using namespace std;    
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<(b+(100-a)*c)*10<<endl;
    }
}