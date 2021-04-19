#include<bits/stdc++.h>
using namespace std;
int main(){
    int to;
    int amin,bmin,cmin,t,tmin,a,b,c;
    cin>>to;
    while(to--){
        cin>>amin>>bmin>>cmin>>tmin>>a>>b>>c;
        t=a+b+c;
        if(a>=amin && b>=bmin && c>=cmin && t>=tmin){
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }
}