#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y;
//         cin>>x>>y;
//         cout<<(x%y)<<endl;
//     }

// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int x, y, z;
//         cin >> x >> y >> z;

//         if (((x > y) && (x < z)) || (((x > z) && (x < y))))
//         {
//             cout << x << endl;
//         }
//         if (((y > x) && (y < z)) || (((y > z) && (y < x))))
//         {
//             cout << y << endl;
//         }
//         if (((z > y) && (z < x)) || (((z > x) && (z < y))))
//         {
//             cout << z << endl;
//         }
//     }
// }

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        vector <int> v;
        v[0]=x;
        v[1]=y;
        v[2]=z;
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
    
    return 0;
}