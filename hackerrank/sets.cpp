#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set <int>s;
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int function;
        cin>>function;
        if(function==1){
            int valueToInsert;
            cin>>valueToInsert;
            s.insert(valueToInsert);
        }
        else if(function==2){
            int valueToDelete;
            cin>>valueToDelete;
            s.erase(valueToDelete);
        }
        else if(function==3){
            int valueToSearch;
            cin>>valueToSearch;
            set<int>::iterator index=s.find(valueToSearch);
            if(index!=s.end()){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
        }
        i++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}



