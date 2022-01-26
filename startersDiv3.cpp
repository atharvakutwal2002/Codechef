#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int x,y,z;
//         cin>>x>>y>>z;
//         int pr=(z*x)-(y*x);
//         cout<<pr<<endl;
//     }

//     return 0;
// }

// void ans(int x)
// {
//     for (int i = 1; i < 66; i++)
//     {
//         for (int j = i + 1; j < 66; j++)
//         {
//             for (int k = j + 1; i < 66; k++)
//             {
//                 if ((i + j + k) / 3 == x)
//                 {

//                     cout << i<<" " << j<<" " << k << endl;
//                     return;
//                 }
//             }
//         }
//     }
// }

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         vector<int> v;
//         int x;
//         cin >> x;
//         ans(x);
//     }

//     return 0;
// }

int main()
{
    int n;
    scanf("%d", &n);
    while (n--) {
   
        int n, k, x;
        scanf("%d %d %d", &n, &k, &x);
        if (x > k)
        printf("-1\n");

        else{
        
            int count = 0;
            for (int i = 0; i < n; i++){
                if (count == x)
                    count = 0;
            printf("%d", count);
            count++;
        }
        printf("\n");
        }
    }

    return 0;
}
