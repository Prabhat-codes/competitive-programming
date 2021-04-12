#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int max=0;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i==0){
            max=a[i];
        }
        else if(a[i]>max){
            max=a[i];
        }
    }
    for(int i=0;i<n;i++){
        sum+=abs(a[i]-max);
    }
    cout<<sum;
}
