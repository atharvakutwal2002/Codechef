#include <bits/stdc++.h>
using namespace std;

// // 1st problem of coins
// bool check(int mid, int n)
// {
//     long long coins = (mid * (mid + 1)) / 2;
//     if (coins <= n)
//     {
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         int low = 0;
//         int high = n;
//         int ans = 0;
//         while (low <= high)
//         {
//             int mid = (low - high) / 2;
//             if (check(mid, n))
//             {
//                 ans = mid;
//                 low = mid - 1;
//             }
//             else
//             {
//                 high = mid - 1;
//             }
//         }
//         cout<<ans  <<endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;

    while (t--)
    {
        long int n;
        cin >> n;

        unsigned long int sum = 0;
        long long int i = 1;
        for (i; i <= n; i++)
        {
            sum += i;
            if (sum > n)
            {
                break;
            }
        }

        cout << i - 1 << endl;
    }
    return 0;
}

// problem 2  stacks

#include <bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main()
{
    // your code goes here

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (upper_bound(ans.begin(), ans.end(), a[i]) == ans.end())
            {
                ans.push_back(a[i]);
            }
            else
            {
                int idx = upper_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
                ans[idx] = a[i];
            }
        }
        cout << ans.size() << " ";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
