#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        string a;
        string b;
        cin>>a>>b;
        string c=a+b;
        if(a.length()==1 && b.length()==1){
            if(a!=b){
                cout<<"No"<<endl;
                continue;
            }
            else{
                cout<<"Yes"<<endl;
                continue;
            }
        }
        // cout<<c;
        for(int j=0;c[j]!='\0';j++){
            char l=c[j];    
            int count=0;
            for(int i = 0; c[i] != '\0'; i++) {
                if(c[i] == l){
                    count++;
                    if(count==2){
                        goto yes;
                    }
                }
            }
        }
        cout<<"No"<<endl;
        continue;
        yes:
        cout<<"Yes"<<endl;   
    }
    return 0;
}
