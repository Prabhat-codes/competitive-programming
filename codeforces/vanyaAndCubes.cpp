#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int i=1;
    int sum_of_sums=0;
    while(sum_of_sums<10000){
        sum=sum+i;
        sum_of_sums=sum_of_sums+sum;
        if(sum_of_sums>n){
            break;
        }
        i++;
        
        // cout<<sum<<endl;
    }
    // cout<<"position"<<endl;
    cout<<i-1;
}