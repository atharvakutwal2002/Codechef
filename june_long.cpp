// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     while (N--)
//     {
//         int x ;
//         cin>>x;
//         int y;
//         cin>>y;
//         if (x>y)
//         {
//             cout<<abs(x-y)<<endl;
//         }
//         else{
//             cout<<0<<endl;
//         }
//     }

//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(void) {
// 	int T;
//     cin>>T;

// 	while (T--) {
// 	    int n, x;
//         cin>>n>>x;

// 	    if (n%6 == 0) {
//             cout<<(n/6)*x<<endl;

// 	    }
// 	    else {
//             cout<<((n/6)+1)*x<<endl;

// 	    }
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// int main(void) {
// 	int T;
//     cin>>T;

// 	while (T--) {
// 	    int n, x;
//         cin>>n>>x;


//         for (int i = 1; i < x; i++)
//         {
//             if(i%2==0){
//                 n++;
//             }else{
//                 n=n+2;
//             }
//             if (n==x)
//             {
//                 cout<<"Yes"<<endl;
                
//             }
//         }
        
// 	    // while (n<= x)
//         // {
//         //     if(n%2==0){
//         //         n++;
//         //     }else{
//         //         n=n+2;
//         //     }
//         //     if (n==x)
//         //     {
//         //         cout<<"Yes"<<endl;
                
//         //     }
            
//         // }
//         cout<<"NO"<<endl;
        
// 	}
    
// 	return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >>t;
   while(t--)
   {
     long long x,y;
      cin >>x>>y;
          if((y-x)%3==2)
         {
              cout <<"NO"<< endl;
          }
          else{
               cout <<"YES"<< endl;
          }
   }
    return 0;

}    