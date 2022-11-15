#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a=0;
	    cin>>n;
	    string s,s1,s2;
	    cin>>s;
	   a=n/2;
	      for(int i=0;i<n;i++){
	          if(i>=0 && i<a)
	          s1+=s[i];
	          
	          else if(i>=a&& i<n)
	          s2+=s[i];
	      }
	        if(s1==s2)
	        cout<<"YES"<<endl;
	        
	        else cout<<"NO"<<endl;
	    
	   
	}
	return 0;
}
