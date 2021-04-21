#include<bits/stdc++.h>
using namespace std;
int min(int a,int b,int c){
    return((a<=b)?((a<=c)?a:c):((b<=c)?b:c));
}
int main(){
    int no_of_friends;
    cin>>no_of_friends;
    int k;
    cin>>k;
    int l;
    cin>>l;
    int c;
    cin>>c;
    int d;
    cin>>d;
    int p;
    cin>>p;
    int nl;
    cin>>nl;
    int np;
    cin>>np;
    int total_drink=k*l/nl;
    int total_lime=c*d;
    int total_p=p/np;
    
    cout<<min(total_drink,total_lime,total_p)/no_of_friends;
}