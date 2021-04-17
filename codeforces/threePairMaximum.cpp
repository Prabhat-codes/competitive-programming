#include<bits/stdc++.h>
using namespace std;
    
int main(){
	int t,a[3];
    cin>>t;
    while(t--){
    		cin>>a[0]>>a[1]>>a[2];
    		sort(a,a+3);
    		if(a[2]!=a[1]) cout<<"No"<<endl;
    		else cout<<"Yes\n"<<a[2]<<" "<<a[0]<<" "<<1<<endl;
    	}
    }