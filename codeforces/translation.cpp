#include<bits/stdc++.h>
using namespace std;
int main() {
    string a,b;
    cin>>a>>b;
    if(a.length()!=b.length()){
        cout<<"NO";
        return 0;
    }
    else {
        int i=0;
        while(i<a.length()){
            // cout<<a[i]<<" "<<b[b.length()-i-1]<<endl;
            if(a[i]==b[b.length()-i-1]){
                // cout<<"continue";
                i++;
                continue;
            }
            else {
                cout<<"NO";
                return 0;
            }
            
        }
        cout<<"YES";
        
    }
}