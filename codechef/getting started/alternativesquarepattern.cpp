#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=count;j<count+5;j++){
                cout<<j<<" ";
            }
            count+=4;
        }
        else{
            for(int j=count+5;j>count;j--){
                cout<<j<<" ";
            }
            count+=1;
        }
        
        cout<<endl;
    }
    return 0;
}