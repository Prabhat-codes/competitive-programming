#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    if(n<26){
        cout<<"NO";return 0;
    }
    for(int i=0;i<=n;i++) { 
      if(s[i]>=97 && s[i]<=122)
      {
		s[i]=s[i]-32;
      }  
    //   cout<<s[i];
    }  
    
    // cout<<endl;
    int a[26];
    for(int i=65;i<=90;i++){
        a[i]=0;
    }
    for(int j=0;j<n;j++){
        char ch=s[j];
        int chn=int(ch);
        a[chn]=1;
    }
    for(int i=65;i<=90;i++){
        if(a[i]==0){
            cout<<"NO";
            return 0;
        }
        // cout<<char(i)<<" "<<a[i]<<endl;
    }
    cout<<"YES";
}   