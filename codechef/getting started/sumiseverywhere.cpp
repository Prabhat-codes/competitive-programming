#include <iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    long long int o=0;
    long long int e=0;
    
    for(long long int i=1;i<=2*n;i++){
        if(i%2==0){
            e+=i;
            // cout<<n<<"E";
        }
        else {
            o+=i;
            // cout<<n<<"E";
            }
        
    }
    cout<<o<<" "<<e;
    return 0;
}