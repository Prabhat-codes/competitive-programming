#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    int final[n]={0};
    int a[n],b[n];
    while(i<n){
        cin>>a[i];
        
        final[a[i]-1]=1;
        i++;
    }
    i=0;
    while(i<n){
        cin>>b[i];
        
        final[b[i]-1]=1;
        i++;
    }
    i=0;
    while(i<n){
        if(final[i]==0){
            cout<<"Oh, my keyboard!";
            return 0;
        }
        i++;
    }
    cout<<"I become the guy.";
}
