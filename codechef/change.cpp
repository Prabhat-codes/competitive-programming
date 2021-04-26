#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    int no;
    no=n/100;
    count+=no;
    n=n-no*100;
    no=n/20;
    count+=no;
    n=n-no*20;
    no=n/10;
    count+=no;
    n=n-no*10;
    no=n/5;
    count+=no;
    n=n-no*5;
    no=n/1;
    count+=no;
    n=n-no*1;
    cout<<count;
}