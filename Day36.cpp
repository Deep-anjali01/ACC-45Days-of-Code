#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// your code goes here

	int t;
	cin>>t;
	while(t>0)
	{
	    int x,m,d;
	    cin>>x>>m>>d;
	    int sum=x+d;
	    int product=x*m;
	       
	     cout<<min(product,sum)<<endl;
	    
	    
	    
	    
	    t--;
	}
	return 0;
}