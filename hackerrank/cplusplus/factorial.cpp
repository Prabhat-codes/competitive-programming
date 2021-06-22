#include <iostream>
using namespace std;
  
unsigned int factorial(unsigned int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
  
// Driver code
int main()
{
    int num ;
    cin>>num;
    cout << factorial(num) ;
    return 0;
}