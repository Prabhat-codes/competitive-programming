#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int hor,ver;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                hor=i;
                ver=j;
            }
        }
    }
    int total_number_of_changes=abs(3-(ver+1))+abs(3-(hor+1));
    // cout<<"Horizontal: "<<hor+1<<" ";
    // cout<<"Vertical:"<<ver+1<<endl;
    // cout<<"Horizontal number of changes: "<<abs(3-(hor+1));
    // cout<<"Vertical number of  changes: "<<abs(3-(ver+1))<<endl;
    cout<<total_number_of_changes;

}