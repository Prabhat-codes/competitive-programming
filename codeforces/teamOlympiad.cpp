#include <iostream>
using namespace std;
int main(){
	int n,y,i,b;
        cin>>n;
            int a[4],arr[4][5000];
        for(i=0;i<n;i++){
            cin>>b;
            a[b]++;
            arr[b][a[b]]=i+1;
        }
        y=min(a[1],min(a[2],a[3]));
        cout<<y<<"\n";
        for(i=1;i<=y;i++)
        cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<"\n";
}