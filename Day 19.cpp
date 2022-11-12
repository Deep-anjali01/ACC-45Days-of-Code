#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	     int n;
	     int b=0;
	    cin>>n;
	     int a[n];
	     for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    if(a[0]==a[n-1])b=1;
	    else 
	    {
	        for(int i=0;i<n;i++){
	             if(a[0]==a[i] && a[i+1]==a[n-1]) 
	             {b=1;}
	             
	        }
	    }
	        
	        if(b==1)cout<<"YES"<<endl;
	        else cout<<"NO"<<endl;
	       
	    
	    
	}
}