#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[2];
    char b[5][2];
    cin>>a;
    int i=0;
    int flag=0;
    while(i<5){
        cin>>b[i];
        // cout<<i<<endl;
        // printf("Comparing %c and %c \n",a[0],b[i][0]);
        // printf("Comparing %c and %c \n",a[1],b[i][1]);
        if(a[0]==b[i][0]||a[1]==b[i][1]){
            flag=1;
            // cout<<"INSIDE";
        }
        
        i++;
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}