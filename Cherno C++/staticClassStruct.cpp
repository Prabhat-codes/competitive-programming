#include<iostream>
using namespace std;

struct Entity {
    int x,y;

    void print(){
        cout<<x<<" "<<y;
    }
};

int main(){
    Entity a;
    a.x=2;
    a.y=3;
    Entity b={5,8};
    a.print();
    b.print();

}