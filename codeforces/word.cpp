#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    int counter=0;
    int i=0;
    while(i<str.length()){
        if(int(str[i])<97){
            counter++;
        }
        i++;
    }
    // cout<<counter;
    // cout<<" "<<str.size()-counter;
    if(counter>str.length()-counter){
        transform(str.begin(), str.end(),str.begin(), ::toupper);
        cout<<str;
    }
    else{
        transform(str.begin(), str.end(),str.begin(), ::tolower);
        cout<<str;

    }
}
