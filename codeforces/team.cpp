#include<bits/stdc++.h>
using namespace std;
int main(){
    int no_of_problems;
    cin>>no_of_problems;
    int i=0,check=0;
    while(i<no_of_problems){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b+c>=2){
            check++;
        }
        i++;
    }
    cout<<check;
}
