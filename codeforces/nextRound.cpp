#include<bits/stdc++.h>
using namespace std;
int main(){
    int no_of_participations;
    int position_to_check;
    cin>>no_of_participations>>position_to_check;
    int i=0;
    int a[no_of_participations];
    while(i<no_of_participations){
        cin>>a[i];
        i++;
    }
    i=0;
    int counter=0;
      while(i<no_of_participations){
        if(a[i]>=a[position_to_check-1]){
            counter++;
        }
        if(a[i]==0&&a[position_to_check-1]==0){
            counter--;
        }
        i++;
    }
    cout<<counter;
}