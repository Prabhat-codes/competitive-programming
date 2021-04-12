#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    int n=4;
    while(n--){
        cin>>a[n];
        // cout<<n<<endl;
    }
    n=4;
    int *max;
    max=max_element(a, a+ n);
    int m=*max;
    while(n--){
        if(a[n]==m){
            continue;
        }
        cout<<m-a[n]<<" ";
    }
}