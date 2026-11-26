// Prints every substring that starts with one given letter and ends with another,
// followed by how many there are. Input: the number of tests, then for each test
// a word and the two letters.
#include<bits/stdc++.h>
using namespace std;

// Function to print the matching sub strings
void subString(const string &str, char star, char en)
{
    int n=str.length();
    int number_of_substrings=0;
    // Pick the length
    for (int len = 1; len <= n; len++)
    {
        // Pick starting point
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;
            if(str[i]==star && str[j]==en){
                cout << str.substr(i,len) << endl;
                number_of_substrings++;
            }
        }
    }
    cout << number_of_substrings << endl;
}

// Driver program to test above function
int main()
{
    int t;
    cin>>t;
    while(t--){
        string c;
        cin>>c;
        char start,end;
        cin>>start>>end;
        subString(c,start,end);
    }
    return 0;
}
