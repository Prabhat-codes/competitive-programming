#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int i=0,j=0;
    vector <int>a;
    while(i<n){
        int b;
        cin>>b;
        a.push_back(b);
        i++;
    }
    
    
    int single_erase;
    cin>>single_erase;
    single_erase-=1;
    
    a.erase(a.begin()+single_erase);
    int start,end;
    cin>>start>>end;
    a.erase(a.begin()+start-1,a.begin()+end-1);
    i=0;
    cout<<a.size()<<endl;
    while(i<n+start-end-1){
        cout<<a[i]<<" ";
        i++;
    }
    
    return 0;
}
