#include <iostream>
#include <bits/stdc++.h> 
typedef long long ll;
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	     int n,k,ag;
	     
	    cin>>n>>k>>ag;
	    vector <int>v(n);
	    for(int i=0;i<n;i++)cin>>v[i];
	    
	    int s = accumulate(v.begin(), v.end(), 0);
	    int x=((n+k)*ag)-s;
	    if(x==0)cout<<"-1"<<endl;
	    if( ((n+k)*ag)>s){
	        if (x%n==0)
	        cout<<x/n<<endl;
	        else cout<<"-1"<<endl;
	    }
	    else cout<<"-1"<<endl;
	}
	return 0;
}
