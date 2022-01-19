#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin>>T;
    for (int i = 0; i < T; i++)
    {

        int N, A;
        cin >> N >> A;
        vector<int> v;
        v.push_back(A);
        v.push_back(N);

        if (A > 32767 || N > 32767)
        {
            cout << "Impossible";
            break;
        }

        if ((A & N) == 1)
        {
            v.push_back(1);
        }
        else if ((A & N) == 0)
        {
            v.push_back(1);
        
        }
        int sum = accumulate(v.begin(), v.end(), 0);
        if ((sum % 2) == 0)
        {
            cout << "even" << endl;
        }
        else 
        {
            cout << "odd" << endl;
        }
        cout <<sum<<endl;
        
    }

    return 0;
}