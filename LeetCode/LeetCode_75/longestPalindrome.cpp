#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int longestPalindrome(string s)
{
    unordered_map<char, int> a;
    int o = 0, e, l = 0, maxi = 0;
    for (int i = 0; i < s.length(); i++)
    {
        a[s[i]]++;
        if(a[s[i]]%2==0){
            l+=2;
            a[s[i]]=0;
        }
    }
    unordered_map<char, int>::iterator p;
    for (p = a.begin(); p != a.end(); p++)
    {
        cout << "(" << p->first << ", " << p->second << ")\n";
        if(p->second==1)
        {
            l+=1;
            break;
        }
    }

    return l;
}
int main()
{
    string s = "civilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
    cout << longestPalindrome(s);

    return 0;
}