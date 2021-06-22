#include<bits/stdc++.h>
using namespace std;
 

int waterLeft(int A[], int n)
{
    int remaining = 0;
    for (int i = 1; i < n-1; i++) {
        int left = A[i];
        for (int j=0; j<i; j++)
           {left = max(left, A[j]);}
        int right = A[i];
        for (int j=i+1; j<n; j++)
           {right = max(right, A[j]);}
        
       remaining = remaining + (min(left, right) - A[i]);  
    }
 
    return remaining;
}
 

int main()
{   
    int n;
    cin>>n;
    int A[n] ;
    
     for(int i=0;i<n;i++){
         cin>>A[i];
     }
    cout << waterLeft(A, n);
     
    return 0;
}