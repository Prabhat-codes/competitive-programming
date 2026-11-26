// Codeforces 1325B, CopyCopyCopyCopyCopy: when the array is repeated n times,
// the longest increasing subsequence is the number of different values.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> values;
        int i=0;
        while(i<n){
            int a;
            cin>>a;
            values.insert(a);
            i++;
        }
        cout<<values.size()<<endl;
    }
    return 0;
}
