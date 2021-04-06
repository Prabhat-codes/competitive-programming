#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int a;
    // int counter=0;
    while(i<n){
        cin>>a;
        if(a==1){
            cout<<"HARD";
            return 0;
        }
        i++;
    }
    cout<<"EASY";
}
