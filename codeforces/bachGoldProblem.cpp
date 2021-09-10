#include<bits/stdc++.h>
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
int main(){
    int n;
    cin>>n;
    int sum=0;
    while(n--){
        if(isPrime(n)){
            sum=sum+n;
        }
    }
