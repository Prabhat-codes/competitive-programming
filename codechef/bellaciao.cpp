#include <iostream>
using namespace std;

int main() 
{
	int t;
    cin>>t;
    int D,d,p,q;
    while(t--)
    {
    cin>>D>>d>>p>>q;
    int sum=0,i=0;
    i=D%d;
    sum=d*(p*i+ q*(i-1)*i/2 + (D%d)*(p+i*q));
    cout<<sum<<endl;
    }
	return 0;
}
