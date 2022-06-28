#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<a+b+c-min(c,min(a,b));
        cout<<endl;        
    }
}