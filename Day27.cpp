#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     
	    string s;
	    int n,k,count=0;
	    cin>>n>>k;
	    cin>>s;
	    
	    if(k>n)
	    cout<<"NO"<<endl;
	    
	    else if(k>=0)
	    {
	    for( int i=0,j=(n-1);i<j;i++,j--)
	    {
	      
	           if(s[i]!=s[j])
	           count++;
	           
	    
	    }
	   
	if(k>=count)
	{
 if((k-count)%2==0) cout<<"YES"<<endl;
     else if(n%2!=0)
     cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
	}
	
	else cout<<"NO"<<endl;
	   

}

}
return 0;
}
	    
	    
