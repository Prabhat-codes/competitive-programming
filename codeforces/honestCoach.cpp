#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n;
    while(n--){
        cin>>m;
        int a[m];
        int i=0;
        while(i<m){
            cin>>a[i];
            i++;
        }
        
        sort(a,a+m);
        // while(m--){
        //     cout<<a[m]<<" ";
        // }

        int min=abs(a[1]-a[0]);
        // cout<<"MIN:"<<min;
        for(int j=1;j<i;j++){
        // {   cout<<endl<<"DIFF"<<abs(a[j]-a[j-1]);
            if(abs(a[j]-a[j-1])<min){
                min=abs(a[j]-a[j-1]);
                // cout<<"IN HERE FOR "<<min;
            }
        }
        cout<<min<<endl;
    }
}