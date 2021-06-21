#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int flag=0;
    while(a--){
        int c;
        cin>>c;
        if(b==c){flag=1;}
    }
    if(flag){
        cout<<"1";
    }
    else cout<<"-1";
    
    return 0;
}