#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{   
    stack<char> a;
    string s;
    cin>>s;
    int count=0;
    //  []([]){}
    for(int i=0;i<s.length();i++){
        char b=s[i];
        if(b=='['||b=='{'||b=='('||b=='<'){
            a.push(b);
        }
       
        else if(b==']'||b=='}'||b==')'||b=='>'){
            char c=a.top();
           
            if(c=='[' && b==']'){
                count++;
                a.pop();
            }
            else if(c=='{' && b=='}'){
                count++;
                a.pop();
            }
            else if(c=='(' && b==')'){
                count++;
                a.pop();
            }
            else if(c=='<' && b=='>'){
                count++;
                a.pop();
            }else{
                cout<<"ERROR: "<<a.top()<<" ";
                a.pop();
                i--;
            }    
        }
    }
    cout<<count;
    return 0;
}