#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0; int counter=0;
    while(i<n){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            counter++;
        }
        i++;
    }
    cout<<counter;
}