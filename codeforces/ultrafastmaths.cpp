    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        long long m,n;
        cin>>m>>n;
        int i=0;
        long long sum=0;
        int a[100];
        while(n>0){
            int c=m%10;
            int d=n%10;
            a[i]=abs(c-d);
            // cout<<n-i-1<<" "<<abs(c-d)<<endl;
            i++;
            n=n/10;
            m=m/10;
        }
        // int j=0;
        // cout<<endl;
        // i=0;
        --i;
        for(;i>=0;i--){
            cout<<a[i];
        }
    }