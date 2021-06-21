#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    int i=1;
    int count=0;
    int j=0;
    while(i<=a){
        if(a%i==0){
            b[j]=i;
            j++;
            count++;
        }
        i++;
    }
    cout<<count<<endl;
    i=0;
    while(i<j){
        cout<<b[i]<<" ";
        i++;
    }
    return 0;
}