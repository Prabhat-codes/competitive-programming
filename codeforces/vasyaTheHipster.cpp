#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int counter=0;
    while(a!=0&&b!=0){
        counter++;
        // cout<<a<<" IN LOOP"<<b;
        a--;
        b--;
    }
    cout<<counter;
    // cout<<a<<" "<<b;
    int c=a/2;
    c=c+b/2;
    cout<<" "<<c;

}