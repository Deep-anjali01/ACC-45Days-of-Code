#include <bits/stdc++.h>
#include <map>
using namespace std;
long long factorial(long int b,vector<long long> &dynamic_array)
{
	if(b==1||b==2){
	    return b;
	}
	if(dynamic_array[b]!=-1){
	    return dynamic_array[b];
	}
	else{
	    return dynamic_array[b]=(b*factorial(b-1,dynamic_array))%(1000000007);
	}

}
int main() {
	// your code goes here
	int t;
	cin>>t;
	vector<long long> dynamic_array(1000000,-1);
	while(t--)
	{
	    
	    long long int n,sum=0;
	    cin>>n;
	    long long a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	     for(int i=0;i<n;i++)
	    {
	        int mul=1;
	        mul=(factorial(a[i],dynamic_array)%(1000000000+7));
	        sum+=mul%(1000000000+7);
	    }
	    
	    cout<<sum%(1000000000+7)<<endl;
	}
	return 0;
}
