#include <bits/stdc++.h>
using namespace std;
int min(int x, int y, int z) {

  int smallest = x;

  if (x < smallest)
    smallest=x;
  if (y < smallest)
    smallest=y;
  if(z < smallest)
    smallest=z;

  return smallest;
}
int main(){
    int p,q,r;
    int  t;
    int c=t;
    cin>>t;
    int b[t];
    int i=0;
    while(t--){
    cin>>p>>q>>r;
    int P,Q,R;
    if(p==q && q==r){
        cout<<(r/4+r/2+r)*7;
        continue;
    }
    P=p;
    Q=q/2;
    R=r/4;
    int a=min(P,Q,R);
    b[i]=a*7;
    cout<<"A:"<<b[i]<<endl;
    i++;
    }
    cout<<"ANSWER";
    for(int j=0;j<c;j++){
       cout<<b[j]<<endl;
   }
}