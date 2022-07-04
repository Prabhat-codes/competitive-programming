#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isSubsequence(string s, string t)
{
    int a=0, b=0;
    while (b < t.length())
    {
        if (s[a] == t[b])
        {
            a++;
        }
        b++;
    }
    return a==s.length();
}
int main()
{
    string s = "aaaaa";
    string t = "bbaaa";
    cout << isSubsequence(s, t) << endl;
    return 0;
}