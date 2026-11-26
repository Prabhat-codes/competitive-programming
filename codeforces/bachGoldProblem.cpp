// Codeforces 749A, Bachgold Problem: write n as a sum of as many primes as possible.
// Using only 2s gives the most terms; an odd n needs one 3 instead.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<n/2<<endl;
    while(n>3){
        cout<<2<<" ";
        n-=2;
    }
    cout<<n<<endl;
    return 0;
}
