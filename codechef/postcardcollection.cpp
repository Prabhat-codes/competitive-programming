#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int reversedNumber = 0, remainder;
    while(n != 0) {
        remainder = n%10;
        reversedNumber +=  remainder;
        n /= 10;
    }
    return reversedNumber;
}
int main(){
    int a;
    cin>>a;
    int su=sum(a);
    cout<<su;
}