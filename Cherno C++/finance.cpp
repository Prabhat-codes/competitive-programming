#include<iostream>
using namespace std;
 int main(){
    int duration=26;
    int savings;
    int grosspay=2000;
    int living=1600;
    int deduction=200;
    int currency=81.07;
    // savings=((grosspay-deduction-living)*(duration*12/52)*currency);
    savings=grosspay-deduction;
    cout<<savings<<"Deduction\n";
    savings=savings-living;
    cout<<savings<<"Living\n";
    savings=savings*duration/4.345;
    cout<<savings<<"Duration\n";
    savings=savings*currency;
    cout<<savings<<"\n";
    cout<<savings<<"\n";
    if(savings<10000){
        cout<<"10000";
    }
    else if(savings<10000 && savings<200000){
        cout<<0.3*savings;
    }
    else if(savings<200000 && savings<400000){
        cout<<(0.3*200000+0.25*(savings-200000));
    }
    else if(savings>400000){
        cout<<(0.3*200000+0.25*200000+0.2*(savings-400000));
    }
 }