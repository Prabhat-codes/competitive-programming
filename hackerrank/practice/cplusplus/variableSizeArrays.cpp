#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,q,tempValue;
    cin>>n>>q;
    vector<vector<int>> a(n);
    int no;
    for(int i=0;i<n;i++){
        cin>>no;
        for(int j=0;j<no;j++){
            cin>> tempValue;
            a[i].push_back(tempValue);
        }
    }  
    for(int i=0;i<q;i++){
        int d,e;
        cin>>d>>e;
        cout<<a[d][e]<<endl;
    }
    
    return 0;
}
