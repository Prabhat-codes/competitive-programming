#include <bits/stdc++.h>
using namespace std;
int frequency(int arr[], int size){
   bool check[size];
   for(int i=0;i<size;i++){
      check[i] = 0;
   }
   for(int i=0; i<size; i++){
      if(check[i]== 1){
         continue;
      }
      int count = 1;
      for(int j = i+1; j<size; j++){
         if (arr[i] == arr[j]){
            check[j] = 1;
            count++;
         }
      }
      if(count%2!=0){
          return arr[i];
      }
   }
    return 0;
}
int main(){
   int n;
   cin>>n;
   int arr[n];
   while(n--){
       cin>>arr[n];
   }
   //calculate the size of an array
   int size = sizeof(arr) / sizeof(arr[0]);
   //call function to calculate the frequency
   int a=frequency(arr, size);
   cout<<a;
   return 0;
}