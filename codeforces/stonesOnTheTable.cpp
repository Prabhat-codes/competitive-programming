#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string str;
    cin>>str;
    int flag=0;
    int counter=0;
    for(int i=0;i<n-1;i++){
        if(str[i]==str[i+1]){
            counter++;
            flag=1;
        }
    }
    
    if(flag==0){
        // cout<<"FLAG=0";
        cout<<"0";
    }
    else{
        // cout<<"FLAG=1";
        cout<<counter;
    }
}