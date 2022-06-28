#include<bits/stdc++.h>
using namespace std;

int main()
    {
        string b,c;
        cin>>b;
        int j=0;
        for(int i=0;i<b.length();i++)
        {
            if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'){
                continue;
            }
            else{
                cout<<"HELLO";
                c.append('.');
                c.append(str(b[i]));
            }
        }
        cout<<c;
        return 0;
    }