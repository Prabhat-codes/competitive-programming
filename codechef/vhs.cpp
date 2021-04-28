#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int a[n];
    vector<int> a;
    int i=0;
    while(i<n){
        int b;
        cin>>b;
        a.push_back(b);
        i++;
    }
    sort(a.begin(),a.end());
     i=0;
    while(i<n){
        // cout<<a[i]<<" ";
        i++;
    }
    i=0;
    int count=1;
    int max=0;
    while(i<n){
        if(a[i+1]==a[i]+1){
            count++;
            // cout<<a[i]<<" ";
            // cout<<"count" <<count<<" "<<endl;
            if(count>max){
                max=count;
            }
            // continue;
        }
        else{
            count=1;
        }
    i++;
    }
    cout<<max<<endl;
    return 0;
   
}    