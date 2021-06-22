#include<bits/stdc++.h>
using namespace std;
 
// Function to print all sub strings
void subString(char str[], int n,star,en)
{   int flag=0;
    int number_of_substrings=0;
    // Pick starting point
    for (int len = 1; len <= n; len++)
    {   
        // Pick ending point
        for (int i = 0; i <= n - len; i++)
        {
            //  Print characters from current
            // starting point to current ending
            // point. 
            int j = i + len - 1;           
            for (int k = i; k <= j; k++){
                if(k==i){
                    if(str[k]==star){
                        flag++;
                    }
                }
                if(k==j){
                    if(str[k]==en){
                        flag++;
                    }
                }
                
                cout << str[k];
            }
            if(flag==)
             
            cout << endl;
        }
    }
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
        cin>>start,end;
        int n=c.length();
        char str[n+1];
        std::strcpy(str,c.c_str());
        subString(str, strlen(str),start,end);
    
    }
    return 0;
}
