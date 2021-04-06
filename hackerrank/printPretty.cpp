#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map <string,int>clas;
    int n;
    cin>>n;
    int i=0;
    int type;
    int mark;
    string name;
    while(i<n){
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            clas[name] += mark;
        }
        else if (type == 2)
            clas.erase(name);
        else
            cout << clas[name] << "\n";
        i++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



