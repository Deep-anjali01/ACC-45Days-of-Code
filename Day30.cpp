#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    cout<<n<<" ";
	    cout<<n-2<<" ";
	    for(int i=1;i<n-2;i++){
	        cout<<i<<" ";
	    }
	    cout<<n-1<<endl;
	    
	}
	return 0;
}
