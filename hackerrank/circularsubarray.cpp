#include <bits/stdc++.h>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int circularSubarray(int a[], int n);
 

int maxC(int a[], int n)
{
    int max_circularSubarray = circularSubarray(a, n);
    if(max_circularSubarray < 0)
      return max_circularSubarray;

    int mw = 0, i;
    for (i = 0; i < n; i++) {
        mw += a[i]; 
        a[i] = -a[i]; 
    }
    mw = mw + circularSubarray(a, n);
    return (mw > max_circularSubarray) ? mw : max_circularSubarray;
}
 

int circularSubarray(int a[], int n)
{
    int max_yet = 0, max_end = 0;
    int i;
    for (i = 0; i < n; i++) {
        max_end = max_end + a[i];
         
        if (max_yet < max_end)
            max_yet = max_end;
          if (max_end < 0)
              max_end = 0;
    }
    return max_yet;
}

int main()
{   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << maxC(a, n) << endl;
    return 0;
}