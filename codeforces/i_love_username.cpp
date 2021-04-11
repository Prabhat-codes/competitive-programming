#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int i=0;
    int best=0;
    int worst=0;
    int counter=0;
    while(i<n){
        cin>>a[i];
        if(i==0){
            best=worst=a[i];
            i++;
            continue;
        }
        else{
            if(a[i]>best){
                best=a[i];
                counter++;
            }
            else if(a[i]<worst){
                worst=a[i];
                counter++;
            }
        }
        i++;
    }
    cout<<counter;
}
    