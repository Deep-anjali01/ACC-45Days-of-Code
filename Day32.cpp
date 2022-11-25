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
      
        c=log2(n);
       

        cout<<c*a+(c-1)*b<<endl;

    }
	
	return 0;
}

