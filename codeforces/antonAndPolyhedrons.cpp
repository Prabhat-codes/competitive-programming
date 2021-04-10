#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int no_of_sides=0;
    int i=0;
    while(i<n){
        string shape;
        cin>>shape;
        if(shape=="Tetrahedron"){
            no_of_sides+=4;
        }
        else if(shape=="Cube"){
            no_of_sides+=6;
        }
        else if(shape=="Octahedron"){
            no_of_sides+=8;
        }
        else if(shape=="Dodecahedron"){
            no_of_sides+=12;
        }
        else if(shape=="Icosahedron"){
            no_of_sides+=20;
        }
        i++;
    }
    cout<<no_of_sides;
}