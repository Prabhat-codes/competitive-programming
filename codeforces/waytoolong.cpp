#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string check;
    int i=0;
    while(i<n){
        cin>>check;
        if(check.size()>10){
            char a=check[0];
            char b=check[check.size()-1];
            int to_print=check.size()-2;
            cout<<a<<to_print<<b<<endl;
        }
        else
        cout<<check<<endl;
        
        i++;
    }
}