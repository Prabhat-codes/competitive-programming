#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    int i=0;
    int counter=0;
    while(i<a.length()){
        // cout<<i<<endl;
        char a_check=a[i];
        char b_check=b[i];
        int a_check_num=toupper(int(a_check));
        // cout<<int(a_check)<< " ";
        // cout<<int(a_check_num)<<endl;
        int b_check_num=toupper(int(b_check));
        i++;
        if(a_check_num==b_check_num){
            counter++;
        }
        else if(a_check_num>=b_check_num){
            cout<<"1";
            break;
        }
        else if(a_check_num<=b_check_num){
            cout<<"-1";
            break;
        }
   }
   if(counter==a.length()){
       cout<<"0";
   }
}