#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long a,b;
    cin>>n;
    long long ans[n];
    long long sum=0;
    long long i=n;
    while(n--){
        cin>>a>>b;
        //If a and b are equal
        if(a==b){
            ans[n]=0;
        }
        else{
            sum=abs(b-a)/10;
            if(a<=10&&b<=10 || !(sum)){
                ans[n]=1;
                continue;
            }
            else if(sum%10==0){
                ans[n]=sum;
                continue;
            }
            sum+=1;
            ans[n]=sum;
        }
    }
    //Giving the output for the result
    while(i--){
       cout<<ans[i]<<endl;
    }
}