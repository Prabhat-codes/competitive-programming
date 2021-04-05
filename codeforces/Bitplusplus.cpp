#include<bits/stdc++.h>
using namespace std;
int main(){
    int no;
    cin>>no;
    int i=0;
    int result=0;
    while(i<no){
        string operation;
        cin>>operation;
        if(operation=="++X"){
            ++result;
        }
        else if(operation=="X++"){
            result++;
        }
        else if(operation=="X--"){
            result--;
        }
        else if(operation=="--X"){
            --result;
        }
        i++;
    }
    cout<<result;
}