#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int a[n];
    int counter=0;
    while(i<n){
        cin>>a[i];
        if(i==0){
            counter++;
            i++;
            continue;
        }
        else {
            if(a[i]==a[i-1]){
                i++;
                continue;
            }
            else {
                counter++;
                i++;
                continue;
            }
        }
        
    }
    cout<<counter;
}