#include<bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    string str;
    cin>>str;
    stringstream ss(str);
    char ch;
    vector <int>res;
    int a;
    while(ss>>a){
        res.push_back(a);
        ss>>ch;
    }
    sort(res.begin(), res.end());
    for(int i=0;i<res.size();i++){
        if(i==res.size()-1){
            cout<<res[i];
            break;
        }
        cout<<res[i]<<"+";
    }
}
