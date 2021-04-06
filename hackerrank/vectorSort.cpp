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
    int i=0;
    vector <int>a; 
    while(i<n){
        int tempValue;
        cin>>tempValue;
        a.push_back(tempValue);
        i++;
    }  
    sort(a.begin(),a.end());
    i=0;
    while(i<n){
        cout<<a[i]<<" ";
        i++;
    }
    return 0;
}
