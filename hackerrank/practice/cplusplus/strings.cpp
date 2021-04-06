#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b;
    cin>>a>>b;
    int alen=a.size();
    int blen=b.size();
    cout<<alen<<" "<<blen<<endl<<a+b<<endl<<b[0]+a.substr(1,alen)<<" "<<a[0]+b.substr(1,blen);
    // char a1=a[0];
    // char b1=b[0];
    // a=b1+a.substr(1,alen);
    return 0;
}
