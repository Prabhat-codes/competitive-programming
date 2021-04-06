#include<bits/stdc++.h>
using namespace std;
int main() {
    int no_of_games;
    cin>>no_of_games;
    string str;
    cin>>str;
    int a=count(str.begin(),str.end(),'A');
    int d=count(str.begin(),str.end(),'D');
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else {
        cout<<"Friendship";
    }
}