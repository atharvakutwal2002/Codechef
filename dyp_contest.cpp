// #include <bits/stdc++.h>
// using namespace std;
// // int main(){
// //     int t;
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

// int main()
// {

// int t;
// cin>>t;
// // while (t--)
// // {

// // }
// string st= to_string(t) ;
// int l = st.size();
// string mul="1";
// for (int i = 0; i < l; i++)
// {
//     mul+"0";
// }
// cout<<mul<<endl;
// int mx= 10 *l;
// // cout<<l<<endl;
// // cout<<mx<<endl;
// int first= t% 10;
// int second= t% mx;
// cout<<first+second<<endl;

// int t;
// cin >> t;
// while (t--)
// {
//     int n;
//     cin >> n;
//     int rem = n % 10;
//     while (n > 9)
//     {
//         n = n / 10;
//     }
//     cout << n + rem << endl;
// }

// return 0;
// }

// #include <bits/stdc++.h>

// using namespace std;
// #define el endl;

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int rem = n % 10;
//         while (n > 9)
//         {
//             n = n / 10;
//         }
//         cout << n + rem << el;
//     }

//     return 0;
// }


// C++ program to find LCM of two numbers
#include <iostream>
using namespace std;
 

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 

long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
  

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        cout<<gcd(x,y)<<" "<<lcm(x,y)<<endl;
       

    }
    
    return 0;
}