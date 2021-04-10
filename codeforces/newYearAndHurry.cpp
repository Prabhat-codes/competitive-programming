#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int n,k,i,min_num_questions=0;
        cin>>n>>k;
        for(i=1;i<=n;i++){
            min_num_questions+=i*5;
            if(min_num_questions>240-k){
                // printf("%d\n",i-1);
                cout<<i-1;
                return 0;
            }
        }
        // printf("%d\n",i-1);
        cout<<i-1;
        return 0;
    }