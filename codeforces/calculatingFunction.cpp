    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        long long n;
        cin>>n;
        int i=1;
        long long sum=0;
        sum=(n%2==0)?n/2:-1*(n+1)/2;
        cout<<sum;
    }