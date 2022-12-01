#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x1,x2,y1,y2;
	    cin>>n>>x1>>y1>>x2>>y2;
	    int total_cost_insgrid=abs(x2-x1)+abs(y2-y1);
	   
	    int x=min(x1,min(y1,min(n-x1+1,n-y1+1)));
		int y=min(y2,min(x2,min(n-x2+1,n-y2+1)));
      int total_cost_outgrid=x+y;
	  cout<<min(total_cost_insgrid,total_cost_outgrid)<<endl;
	}
	return 0;
}
