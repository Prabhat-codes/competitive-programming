#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b[a];
    int i=0;
    while(i<a){
        cin>>b[i];
        i++;
    }
    i=a-1;
    while(i>=0){
        cout<<b[i]<<" ";
        i--;
    }
    return 0;
}