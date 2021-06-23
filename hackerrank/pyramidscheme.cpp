#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    int a;
    cin>>a;
    n=a*(a+1)/2;
    // cout << "Fibonacci Series: ";
    int b[n];
    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            // cout << t1 << ", ";
            b[i]=t1;
            continue;
        }
        if(i == 2) {
            // cout << t2 << ", ";
            b[i]=t2;
            continue;
            
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        b[i]=nextTerm;
        
        // cout << nextTerm << ", ";
    }
    int c[n];
    for(int i=0;i<n;i++){
        c[i]=b[i+1];
    }
    int m=1;
    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<c[m-1]<<" ";
            m++;
        }
        cout<<endl;
    }
    return 0;
}
