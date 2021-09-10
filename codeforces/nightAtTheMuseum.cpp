#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int n=a.size();
    int total=0; 
    // cout<<int('A');
    int i=0;
    int c,prev;
    // c=int(a[0])-97;
    while(i<n-1){
        // cout<<int(a[i])-97<<" ";
        prev=c;
        c=int(a[i+1])-97;
        int diff=c-prev;
        // if(abs(diff)
        total+=diff;
        cout<<c-prev<<" ";
        i++;
    }
}