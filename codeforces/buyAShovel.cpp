#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r,i=1;
    cin>>k>>r;
    while((k*i)%10!=r&&(k*i)%10!=0){
        i++;
    }
    cout << i;
}