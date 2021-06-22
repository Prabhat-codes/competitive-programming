#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n)
{
    // single line to find factorial
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        cin>>a;
        int div=0;
        while(n--){
            int b;
            cin>>b;
            if(b%5==0){
                div++;
            }
        }
        cout<<factorial(div)/(factorial(div-a)*factorial(a));
    }
    return 0;
}
