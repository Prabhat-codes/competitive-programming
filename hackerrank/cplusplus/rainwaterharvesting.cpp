    #include<iostream>

    using namespace std;

    int main ()

    {   
        int no;
        cin>>no;
        int A[no],B[no], n, i, j, x;
        n=no;
        // cout << "Enter elements of array : ";
        for (i = 0; i < no; i++)
        {
            cin >> A[i];
            B[i]=A[i];
        }

            
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (A[i] < A[j])
                {
                    x = A[i];
                    A[i] = A[j];
                    A[j] = x;
                }
            }
        }
        int area=0;
        // cout << "Second largest number : " << A[1];
        for(i=0;i<n;i++){
            int add=A[1]-B[i];
            if(add<0){
                continue;
            }
            area=area+add;
            // cout<<"AREA:"<<add;
        }
        // cout<<"B"<<endl;
        // for(i=0;i<n;i++){
        //     cout<<A[i]<<" ";
        // }
        // cout<<endl;
        // cout<<"A"<<endl;
        // for(i=0;i<n;i++){
        //     cout<<A[i]<<" ";
        // }
        // cout<<endl;
        cout<<area;

        return 0;

    }