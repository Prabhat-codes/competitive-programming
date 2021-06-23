#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin>>str;
    string r = "", cur = "";
    int d = 0;
    
    for (int i = 0; i < str.length(); ++ i) {
        if (str[i] == '(') {
            d ++;
            if (d > 1) {
                cur += "(";
            }
        } else {
            d --;
            if (d == 0) {
                r += cur;
                cur = "";
            } 
            else {
                cur += ")";
            }
        }
    } 
    cout<<r;
    return 0;
}
