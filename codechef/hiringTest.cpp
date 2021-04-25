#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int N, M, X, Y, countP,countF;
        cin>>N>>M;
        cin>>X>>Y;
        while(N--){
            int m=M;
            char a[m];
            cin>>a;
            countP=countF=0;
            while(m--){
                if(a[m]=='F'){
                    countF++;
                    // cout<<"CHECK1";
                }
                else if(a[m]=='P'){
                    countP++;
                    // cout<<"CHECK2";
                }
            }
            // cout<<"CHECK"<<countP<<" "<<countF<<endl;
            if(countF==X||(countF==(X-1)&&countP>=Y)){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
            cout<<endl;
        }
        
    
}