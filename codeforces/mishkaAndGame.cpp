#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin>>n;
    int counter=0;
    while(n--){
        cin>>a>>b;
        if(a>b){
            counter++;
        }
        else if(a<b){
            counter--;
        }
    }
    if(counter==0){
        cout<<"Friendship is magic!^^";
    }
    else if(counter>0){
        cout<<"Mishka";
    }
    else {
        cout<<"Chris";
    }
}