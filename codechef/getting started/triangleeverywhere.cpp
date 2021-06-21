#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int flag=0;
    if(a<b+c && b<a+c && c<b+a){
        if(a==b && b==c){
            cout<<"1";
        }
        else if(a==b|| a==c||b==c)
        cout<<"2";
        else{
            cout<<"3";
        }
    }
    else{
        cout<<"-1";
    }
    return 0;
}