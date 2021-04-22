
    #include <iostream>
    using namespace std;
    int main()
    {
        int t; cin >> t; 
        while (t--){
            int n, x,k = 0, l = 0; 
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> x;
                if (x == 2) 
                k++;
                else 
                l++;
            }
    if ((k%2!=0&&l==0)||l%2==1 )cout << "NO"<<endl;
    else cout << "YES"<<endl;;
    }}