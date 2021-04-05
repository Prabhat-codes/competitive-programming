#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,b;
    cin>>l>>b;
    int no_of_years=0;
    while(l<=b){
        l=l*3;
        b=b*2;
        no_of_years++;
    }
    cout<<no_of_years;
}