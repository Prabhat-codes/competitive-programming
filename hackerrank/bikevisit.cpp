#include<iostream>
using namespace std;
int countP(int n, int k)
{
  // Base cases
  if (n == 0 || k == 0 || k > n)
     return 0;
  if (k == 1 || k == n)
      return 1;
 
  // S(n+1, k) = k*S(n, k) + S(n, k-1)
  return  k*countP(n-1, k) + countP(n-1, k-1);
}
 
// Driver program
int main()
{   
   int n;
   cin>>n;
   cout <<  countP(n, n)<<" ";
   cout<<   countP(n, 2);
   return 0;
}