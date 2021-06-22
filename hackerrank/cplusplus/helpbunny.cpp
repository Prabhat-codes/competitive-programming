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
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        if(x1!=x2 && y1!=y2){
            cout<<"sad"<<endl;
            continue;
        }
        if(x1==x2 && y1!=y2){
            if(y1>y2){
                cout<<"down"<<endl;
                continue;
            }
            else {
                cout<<"up"<<endl;
                continue;
            }
        }
        if(y1==y2 && x1!=x2){
            if(x1>x2){
                cout<<"left"<<endl;
                continue;
            }
            else {
                cout<<"right"<<endl;
                continue;
            }
        }
    }
    return 0;
}
