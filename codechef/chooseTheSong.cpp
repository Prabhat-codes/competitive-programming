    #include<bits/stdc++.h>
    using namespace std;
    // vector<int> removeFront(vector<int> a){
    //     int f=a.size();
    //     for(int h=0;h<f;h++){
    //         if(h%2==0){
    //         a.erase(a.begin()+h);
    //         }
    //     }
    //     return a;
    // }

    // vector<int> removeBack(vector<int> a){
    //     int j=a.size();
    //     int ct=0;
    //     for(int k=j-1;k>=0;k--){
    //         if(ct%2!=0){
    //             a.erase(a.begin()+k);
    //         }
    //         ct++;
    //     }
    //     return a;
    // }

    int main(){
        int n;
        cin>>n;
        cout<<"A";
        vector<int> a;
        for(int i=1;i<=n;i++){
            a.push_back(i);
            cout<<"E";
        }
        cout<<"D";
        int count=1;
        while(a.size()!=1){
            cout<<"C";
            if(count%2==1){
                int f=a.size();
                for(int h=0;h<f;h++){
                    if(h%2==0){
                        a.erase(a.begin()+h);
                    }
                }       
                // a=removeFront(a);cout<<"A";
            }
            else{
                int j=a.size();
                int ct=0;
                for(int k=j-1;k>=0;k--){
                    if(ct%2!=0){
                        a.erase(a.begin()+k);
                    }
                    ct++;
                }
                // a=removeBack(a);cout<<"B";
            }
        count++;
        }
        for(int i=1;i<=n;i++){
            cout<<a[i-1]<<" ";
        }
    }