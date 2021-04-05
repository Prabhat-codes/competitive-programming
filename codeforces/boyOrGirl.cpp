#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int a[26]={0};
    for(int i=0;i<str.size();i++){
        char letter=str[i];
        int l=int(letter)-97;
        // cout<<l<<endl;
        if(a[l]==0){
            a[l]=1;
            // cout<<"NEW LETTER"<<str[i]<<" "<<l<<" "<<a[l]<<endl; 
        }
    }
    int counter=0;
    for(int  i=0;i<26;i++){
        if(a[i]==1){
            // cout<<"INside second for";
            counter++;
        }
    }
    // cout<<"COUNTER"<<counter<<endl;
    if(counter%2==0){
        cout<<"CHAT WITH HER!";
    }
    else
    cout<<"IGNORE HIM!";
}