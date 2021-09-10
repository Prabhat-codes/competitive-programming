#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int sum=0;
       int i=1;
    //    cout<<"CHECK";
       while(i<=n){
           int a;
           cin>>a;
           if(a<=7){
               sum+=a;
           }
           if(sum==28){
               break;
           }
           i++;
       }
       cout<<i<<endl;
    }
    return 0;
}