#include<bits/stdc++.h>
using namespace std;
int check(int n){
    int digits[10];
    int i=0;
    while(n>0){
        int d=n%10;
        ++digits[d];
        n=n/10;
    }
    while(i<10){
        if(digits[i]>1){
            return 0;
        }
    }
    return 1;
}
int main() {
    int year;
    cin>>year;
    while(year<=9000){
        cout<<year<<" ";
        int result=check(year);
        if(result==1){
            cout<<year;
            break;
        }
        year++;
    }
}