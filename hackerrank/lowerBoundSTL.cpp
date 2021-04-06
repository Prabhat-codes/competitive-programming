#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector <int>a;
    int n;
    cin>>n;
    int i=0;
    while(i<n){
        int b;
        cin>>b;
        a.push_back(b);
        i++;
    }
    
    int noOfQuery;
    cin>>noOfQuery;
    for(int i=0;i<noOfQuery;i++){
        int temp;
        cin >> temp;
        vector<int>::iterator iter;
        iter = lower_bound(a.begin(), a.end(), temp);
        if(*iter==temp){
        cout<<"Yes "<<iter-a.begin()+1<<endl;
        }
        else 
        cout<<"No "<<iter-a.begin()+1<<endl;
    }
    
    
    
    
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}


