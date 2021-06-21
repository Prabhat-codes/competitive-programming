#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    int a,b,c,d;
    while(t--)
    {
    cin>>a>>b>>c>>d;
    int A=c/a;
    int B=d/b;
    cout<<(A+B)<<endl;
    }
	return 0;
}
