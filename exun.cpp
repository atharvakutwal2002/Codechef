#include <bits/stdc++.h>
using namespace std;

int main()
{

    int satisfaction = 0;
    
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int mid_satisfaction=0;

        for (int i = 0; i < 3; i++)
        {
            int x, y;
            int curr_satisfaction = 0;
            cin >> x >> y;
            curr_satisfaction += x += y;

            
            if (mid_satisfaction < curr_satisfaction)
            {
                mid_satisfaction = curr_satisfaction;
            }
            curr_satisfaction=0;
            
        }
        
        cout<<mid_satisfaction<<endl;
    }
    // cout << satisfaction;

    return 0;
}