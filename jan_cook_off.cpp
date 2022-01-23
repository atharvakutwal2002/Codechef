#include <bits/stdc++.h>
using namespace std;

int main()
{

    // Hungry Ashish
    int n;
    cin >> n;
    while (n--)
    {
        int x, y, z;
        cin >> x >> y >> z;

        if (x >= y)
        {
            cout << "pizza" << endl;
        }
        if (x < y && x >= z)
        {
            cout << "burger" << endl;
        }
        if (x < y && x < z)
        {
            cout << "Nothing" << endl;
        }
    }

    // mask policy
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (((x - y) < x) && ((x - y) >= y))
        {
            cout << y << endl;
        }
        else if (((x - y) < x))
        {
            cout << (x - y) << endl;
        }
        else if (y < (x - y))
        {
            cout << y << endl;
        }
    }

    // mean maximization
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
         int arr[n];
         double addition=0;
         for(int i=0;i<n ;i++){
             cin>>arr[i];
             addition+=arr[i];
         }
         sort(arr,arr+n);
         addition-=arr[n-1];
         addition= addition/(n-1);
         cout<<fixed<<setprecision(6)<<addition+arr[n-1]<<endl;
     }



     return 0;





}