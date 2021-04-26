#include<bits/stdc++.h>
using namespace std;
int remove(int n){
    int sum=0;
    while(n>0){
        int r=n%10;
        if(r!=0){
            sum=sum*10+r;
        }
        n/=10;
    }
    
    return sum;
}
int reverse(int n){
    int reversedNumber = 0, remainder;
    while(n != 0) {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    return reversedNumber;
}
int main(){
    int b,c;
    cin>>b>>c;
    int s=b+c;
    int br=reverse(remove(b));
    int cr=reverse(remove(c));
    int sr=reverse(remove(s));
    // cout<<br<<" "<<cr<<" "<<sr;
    if((br+cr)==sr){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
