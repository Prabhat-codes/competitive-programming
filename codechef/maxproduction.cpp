#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    while(n--){
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        int sum=y*d+(7-d)*z;
        if(x*7>sum){
            cout<<7*x<<endl;
        }
        else cout<<sum<<endl;
    }
}