#include <iostream>
#include <bits/stdc++.h>
#include <string.h>

using namespace std;
bool isIsomorphic(string s, string t)
{    
    unordered_map<char,int> map1,map2;
    for(int i=0;i<s.size();i++){
        map1[s[i]]=i+1;
        map2[t[i]]=i+1;
    }
    for(int i=0;i<s.size();i++){
        if(map1[s[i]]!=map2[t[i]]){
            return false;
        }
    }
    return true;
}

int main()
{
    char s[100] = "egf";
    char t[100] = "add";
    cout<<isIsomorphic(s, t);
    return 0;
}