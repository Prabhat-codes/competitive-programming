#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int a;
    cin>>a;
    vector <int>b;
    int c;
    for(int i=0;i<a;i++){
        cin>>c;
        b.push_back(c);
    }
    sort(b.begin(),b.end());
    int min=9999;
    for(int i=0;i<a-1;i++){
        int cur_min=b[i+1]-b[i];
        if(cur_min<min){
            min=cur_min;
        }
    }
    cout<<min;
    return 0;
}
