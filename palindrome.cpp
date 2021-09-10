#include <bits/stdc++.h>
using namespace std;
 
string check_for_Palindrome(string str)
{
    string temp = str;
    reverse(temp.begin(), temp.end());
    if (str == temp) {
        return "Its a palindrome";
    }
    else {
        return "Its not a palindrome";
    }
}
int check(string str){
    if(str.length()<2){
        return 0;
    }
    else{
        return 1;
    }
}
int main()
{
    string str ;
    cin>>str;
    if(!check(str)){
        cout<<"String too small";
        return 0;
    }
    cout << check_for_Palindrome(str);
    return 0;
}




// boolean flag=true;
// for(int i=0;i<str.length()/2;i++){
//     if(str[i]!=str.length()-i-1){
//         flag=false;
//     }
// }
// if(flag==true){
//     cout<<"yes";
// }
// else{
//     cout<<"no";
// }