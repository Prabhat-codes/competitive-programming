#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cin>>x;
    int moves=0;
    int d;
    for(int i=5;i>0;i--){
        d=x/i;
        moves=moves+d;
        x=x-d*i;
    }
    cout<<moves;
}