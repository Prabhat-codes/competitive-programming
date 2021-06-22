#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
  
    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
  
    return true;
}

int main() {
    int n;
    cin>>n;
    int so=0;
    int sp=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            so+=i;
        }
        if(isPrime(i)){
            sp+=i;
        }
    }
    cout<<so<<" "<<sp;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
