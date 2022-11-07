#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	long int t;
	cin>>t;
	while(t--)
	{
	    long int n,a,ans;
	    cin>>n;
	    vector<long>v; 
	    for(int i=0; i<n;i++)
	    {
	        cin>>a;
	        v.push_back(a);
	    }
	    
	     sort(v.begin(),v.end());
	     ans=((v[n-1]-v[0])*v[n-2]);
	     cout<<ans<<endl;
	    }
	return 0;
}
