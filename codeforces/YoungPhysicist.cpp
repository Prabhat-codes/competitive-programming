#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n;
        cin>>n;
        int a=0;
        int b=0;
        int c=0; 
        for(int i=0;i<n;i++){
            int x,y,z;
            cin>>x>>y>>z;
            a+=x;
            b+=y;
            c+=z;
        }
        if(a==b && b==c && c==0){
            cout<<"YES";
        }
        else cout<<"NO";
        return 0;
    }