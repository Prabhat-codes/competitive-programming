#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int answer[n];
    int l=n;
    while(n--){
        int k;
        cin>>k;
        int a[k];
        // int freq[2];
        int i=k;
        // cout<<"TESTING 1 "<<n<<endl;
        while(k--){
            cin>>a[k];
            // freq[a[k]]+=1;
        }
        int j=i;
        while(j--){
            int freq=count(a,a+j,a[j]);
            if(freq==j-1){
                answer[n]=a[j];
            }
        }
        // k=i;
        // cout<<"TESTING 2 "<<n<<endl;
        // while(k--){
        //     // if(freq[a[k]]==1){
        //     //     answer[n]=a[k];
        //     // }
            // cout<<a[k]<<" ";
        // cout<<endl<<"Value of n2 "<<n<<endl;
    }    
    n=l;
    while(n--){
        cout<<answer[n]<<endl;
    }
}