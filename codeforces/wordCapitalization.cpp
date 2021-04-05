#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char a=str[0];
    a=char(toupper(int(a)));
    cout<<a<<str.substr(1,str.size());

}