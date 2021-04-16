#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char c;
    cin>>a>>b;
    int flag=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>c;
            if(c=='C'||c=='Y'||c=='M'){
                flag=1;
            } 
        }
    }
    if(flag==1){
        cout<<"#Color";
    }
    else 
    cout<<"#Black&White";
}