#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans[n];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int s=min(max(2*a,b),max(a,2*b));
        cout<<s*s<<endl;
    }}