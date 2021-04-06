#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    int i=0;
    int a[n];
    while(i<n){
        cin>>a[i];
        i++;
    }
    i=0;
    while(n>i){
        cout<<a[n-1]<<" ";
        n--;
        
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
