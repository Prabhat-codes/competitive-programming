#include<bits/stdc++.h>
using namespace std;

int main(){
    int no,fence,h;
    cin>>no>>fence;
    int i=0;
    int sum=0;
    while(i<no){
        cin>>h;
        if(h>fence){
            sum+=2;
        }
        else sum+=1;
        i++;
    }
    cout<<sum;
}
