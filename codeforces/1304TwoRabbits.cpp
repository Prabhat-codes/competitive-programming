// Code works, just need to check TLE
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,x,y,a,b;
    cin>>n;
   for(int i=0;i<n;i++){
        int t=0,flag=0;
        cin>>x>>y>>a>>b;
        while(x<=y){
            if(x==y){
                cout<<t;
                flag=1;
                break;
            }
            else {
                x+=a;
                y-=b;
                t++;
            }
        }
        if(flag==0){
            cout<<-1;
        }
   }
   
   return 0;
}