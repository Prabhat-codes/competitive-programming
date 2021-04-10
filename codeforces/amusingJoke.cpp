#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    string total=a+b;
    //cout<<total<<" "<<c;
    int tlen=total.size();
    int clen=c.size();
    if(tlen!=clen){
        cout<<"NO";
        return 0;
    }
    sort(total.begin(),total.end());
    sort(c.begin(),c.end());
    // cout<<total;
    // cout<<endl<<c;
    if(total.compare(c)==0){
        cout<<"YES";
    }
    else 
    cout<<"NO";
}