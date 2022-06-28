#include<bits/stdc++.h>
using namespace std;
int main(){
    // cout<<" hello wolrd";
    long int base=24413439.98;
    long int b=base;
    long int r=2.4;
    long int i=0;
    long int sum=0;
    while(i<10){
        sum=base+base*r/100; // Same year calc
        base=sum+b; // PRevious year calc
        cout<<"SUM"<<sum<<endl;   
        i++;
    }
    cout<<sum;
}
