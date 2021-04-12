#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=0;
    string a[n];
    while(i<n){
        string str;
        cin>>str;
        // cout<<"1";
        if(str.size()==2){
            a[i]=str;
            // cout<<"2";
        }
        else{
            string abc;
            for(int j=0;j<str.size()-1;j+=2)
            {
                abc.push_back(str[j]);
                // cout<<"3";
            }
            abc.push_back(str[str.size()-1]);
            a[i]=abc;
            // cout<<"4";
        }
        i++;
        // cout<<"5";
    }
    i=0;
    while(i<n){
        cout<<a[i]<<endl;
        i++;
    }
}