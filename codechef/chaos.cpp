#include <bits/stdc++.h>
using namespace std;

bool check_subsequence(string t, string s) {
      
      int n = s.size();
      
      int j = 0;
      //Check if same
      if(s == t)
        return true;
      //If they're not the same string, check along the word
      for(int i = 0; i < n; i++){
         if(t[j] == s[i])
             j++;
         if(j == t.size())
            return true;
      }
      //If we reach here, without matching all the strings, then that means
      //No subsequence
      return false;
   }

int main(){
   string S = "chaos";
   string T;
   int n;
   cin>>n;
   int c=n;
   string a[n];
   int i=0;
   while(n--){
   cin>>T;
   int b = check_subsequence(S, T);
   if(b){
    //    cout<<"YES"<<endl;
        a[i]="YES";
   }
   else {
    //    cout<<"NO"<<endl;
        a[i]="NO";
   }
   i++;
   }
   for(int j=0;j<c;j++){
       cout<<a[j]<<endl;
   }
}