// Codeforces 118A, String Task: drop the vowels, and put a "." before each
// consonant, all in lower case.
#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string b,c;
        cin>>b;
        string vowels="aeiouy";
        for(int i=0;i<(int)b.length();i++)
        {
            char letter=tolower(b[i]);
            if(vowels.find(letter)!=string::npos){
                continue;
            }
            c+='.';
            c+=letter;
        }
        cout<<c<<endl;
        return 0;
    }
