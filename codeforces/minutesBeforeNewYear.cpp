#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int h,m,final=0;
    while(n--){
        cin>>h>>m;
        final=(23-h)*60+60-m;
        cout<<final<<endl;
    }
}