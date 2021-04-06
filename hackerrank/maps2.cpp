#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map <string,int>m;
    int n;
    cin>>n;
    int i=0;
    int marks;
    string name;
    while(i<n){
        int queryChoice;
        cin>>queryChoice;
        if(queryChoice==1){
            cin>>name>>marks;
            if(m.find(name)==m.end()){
                m.insert(make_pair(name,marks));
            }
            else 
            m[name]+=marks;
        }
        else if(queryChoice==2){
            cin>>name;
            m.erase(name);
        }
        else if(queryChoice==3){
            cin>>name;
            map<string,int>::iterator itr=m.find(name); 
            if(itr==m.end()){
                cout<<"0"<<endl;
            }
            else cout<<m[name]<<endl;
        }
        i++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



