// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
//     int t;
//     cin>>t;
//     while (t--) {
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a+b<c ||a+c<b ||c+b<a)
//         cout<<"YES"<<endl;else cout<<"NO"<<endl;


//     }
	
// 	return 0;
// }
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        unsigned long long int n,c,sum=0;
        cin>>n;
        int a,b;
        cin>>a>>b;
        c=sqrt(n);n=c;
        while(c%2==0){
            c=sqrt(n);
        }
        cout<<c%1000000007<<endl;
        c=2*c;
        while(c>0){
            sum=sum+a+b;
            c--;
            

        }
      
       

        cout<<sum-b<<endl;

    }
	
	return 0;
}

