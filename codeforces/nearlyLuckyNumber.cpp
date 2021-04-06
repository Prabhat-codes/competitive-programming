    #include<bits/stdc++.h>
    using namespace std;
    long long lucky_number_counter(long long n){
        long long counter=0;
        while(n>0){
            long long d=n%10;
            if(d==4 || d==7){
                counter++;
            }
            n=n/10;
        }
        return counter;
    }
    long long lucky(long long n){
        if(n==0){
            return 0;
        }
        while(n>0){
            long long d=n%10;
            if(d!=4){
                if(d!=7){
                    return 0;
                }
            }
            n=n/10;
        }
        return 1;
    }
    int main(){
        long long n;
        cin>>n;
        long long no_of_lucky_number = lucky_number_counter(n);
        // cout<<no_of_lucky_number<<" ";
        long long nearly_lucky=lucky(no_of_lucky_number);
        // cout<<nearly_lucky;
        if(nearly_lucky){
            cout<<"YES";
        }
        else 
        cout<<"NO";
    }
