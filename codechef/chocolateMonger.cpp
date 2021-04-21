#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int not_similar=0;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        int i=0;
        while(i<n)
        {
            cin>>a[i];
            i++;
        }
        i=0;
        sort(a,a+n);
        int similar=0;
        while(i<n){
            if(a[i]==a[i+1]){
                cout<<"SimilAR"<<a[i]<<" "<<a[i+1]<<endl;
                similar++;
            }
            else if(i+1==n){
                similar++;
            }
            else{
                cout<<"NOT SimilAR"<<a[i]<<" "<<a[i+1]<<endl;
                not_similar++;
            }
            i++;
        }
        cout<<"SIMILAR"<<similar<<endl;
        cout<<"NOT SIMILAR"<<not_similar<<endl;
        cout<<""<<not_similar<<" "<<similar<<" "<<x<<endl;
        cout<<not_similar+similar-x<<endl;
        
    
    }
}