#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,k,b;
	    cin>>n;
	    cin>>k;
	    long long int a[n];
	    for(int i=0;i<n;i++) cin>>a[i];
	   
	    
	   bool flag=false;
	    if(n==1 ){
	        if(a[0]==k)
	        cout<<"YES"<<endl;
	     else
	        cout<<"NO"<<endl;
	        continue;
	    }
	   
	   for(int i=0;i<n-1;i++){
	       if(a[i]==k){
	           flag=true;
	           break;
	       }
	   }
	   if(flag==true)cout<<"YES"<<endl;
	   else cout<<"NO"<<endl;

}
return 0;
}
