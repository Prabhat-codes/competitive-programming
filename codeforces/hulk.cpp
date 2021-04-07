#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        // if(i==n){
        //     cout<<"I hate it ";
        // }
        if(i==1){
            cout<<"I hate ";
        }
        else if(i%2==0){
            cout<<"I love ";
        }
        else if(i%2!=0){
        cout<<"I hate ";
        }

        if(i!=n){
            cout<<"that ";
        }
        else if(i==n){
            cout<<"it ";
        }
        i++;

    }
}