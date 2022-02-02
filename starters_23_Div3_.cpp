#include <bits/stdc++.h>
using namespace std;


// some test cases failed
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, p, q, r;
        cin >> a >> b >> c >> p >> q >> r;
        int x = max(p, max(q, r));

        if (a <= b && a <= c)
        {
            a = x;
        }

        else if (b <= a && b <= c)
        {
            b = x;
        }

        else if (c <= a && c <= b)
        {
            c = x;
        }
        float ans=(p+q+r)/2;
        if ((a+b+c)>ans)
        {
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
        
    }

    return 0;
}


// badminton crt ans 
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int p;
	    scanf("%d",&p);
	    printf("%d\n",p/2+1);
	}
	return 0;
}


// avoid contact
#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x==y)
	    printf("%d\n", 2*x-1);
	    else{
	        printf("%d\n",x+y);
	    }
	}
	
	return 0;
}
