#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        cout<<a*b<<endl;
    }
    


    return 0;
}

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        long long int a;
        cin>>a;
        double result = pow(0.143*a, a);
        cout<<round(result)<<endl;
        
    }
    


//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;int p=0;
	    cin>>n>>k;
	    string st;
	    cin>>st;
	    for (int i = 0; i < n/2; i++) {
	        if(st[i]!=st[n-i-1])p++;
	    }
	    int sol=k-p;
	    if((sol>=0 && sol%2==0) || (sol>=0 && n%2==1))cout<<"YES"<<endl;
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
	
}
