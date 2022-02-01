#include <bits/stdc++.h>
using namespace std;

//======problem 1 =========//

int main()
{
    int t;
    cin >> t;
    stack<int> s;
    while (t--)
    {
        int input;
        cin >> input;
        if (input != -1)
        {
            int n;
            cin >> n;
            s.push(n);
        }
        else if (input == -1 && !s.empty())
        {
            cout << s.top() << endl;
            s.pop();
        }
        else
        {
            cout << "kuchbhi?" << endl;
        }
    }

    return 0;
}

//=======problem 2 (BEX) ============//

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    stack<pair<int, string>> bookInfo;
    stack<int> minStack;
    while (q--)
    {
        int n;
        cin >> n;
        if (n != -1)
        {
            string bookName;
            cin >> bookName;
            if (n == 0)
            {
                continue;
            }
            bookInfo.push({n, bookName});
            if (minStack.empty() or n <= minStack.top())
            {
                minStack.push(n);
            }
        }
        else
        {
            int minBookRemoval = 0;
            int minValue = minStack.top();
            while (bookInfo.top().first != minValue)
            {
                minBookRemoval++;
                bookInfo.pop();
            }
            cout << minBookRemoval << " " << bookInfo.top().second << endl;
            bookInfo.pop();
            minStack.pop();
        }
    }

    return 0;
}
