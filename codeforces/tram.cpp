#include<bits/stdc++.h>
using namespace std;
int main(){
    int no_of_stops = 0;
    cin>>no_of_stops;
    int a[no_of_stops],b[no_of_stops];
    int total[no_of_stops]={0};
    for(int i=0;i<no_of_stops;i++){
        cin>>a[i]>>b[i];
        if(i==0){
            total[i]=b[i]-a[i];
        }
        else{
            total[i]=total[i-1]+b[i]-a[i];
        }
        // cout<<total[i]<<endl;
    }
    
    cout<<*max_element(total,total+no_of_stops);
}