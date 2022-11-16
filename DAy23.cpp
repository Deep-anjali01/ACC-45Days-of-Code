#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    long long int n,c;
	    cin>>n;
	    c=n+n;
	    long long int a[c];
	    for(int i=0;i<(c);i++){
	        cin>>a[i];
	    }
	    
	   
	   map<int,int>m;
	    for(int i=0;i<(c);i++)
	        m[a[i]]++;
	        
	        int count=0;
	        for(auto it:m){
	            if(it.second>=3)
	            {count=1;
	            break;}
	        }
	        if(count==1)cout<<"NO"<<endl;
	        else cout<<"YES"<<endl;
	      
	}
	 return 0;
}


