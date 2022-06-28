#include<iostream>
using namespace std;
enum Days
{
    Monday=1, Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday
};

int main(){
    Days day=Wednesday;
    
    if(day==6 || day==7){
        cout<<"Its a weekend\n";
    }
    else{
        cout<<"Its a weekday\n";
    }
}