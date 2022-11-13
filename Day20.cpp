

#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    string s,s1="",s2="";
	    cin>>s;
	    
	    sort(s.begin(), s.end());
	    
	    if(n%2!=0)cout<<"NO"<<endl;
	    else if(n%2==0)
	    {
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==s[i+1])
	        {s1=s1+s[i];
            s2= s2+s[i];i++;}
            
            

	    }
	    if(s1.length()==0 && s2.length()==0)cout<<"NO"<<endl;
	    else if(s1==s2 && s1.length()+s2.length()==n)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	    }
	}
	return 0;

}

// #include<bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 	    long int n,count=0;
// 	    cin>>n;
// 	    string s;
// 	    cin>>s;
	    
	    
// 	    sort(s.begin(), s.end());
	    
// 	    if(n%2!=0)cout<<"NO"<<endl;
// 	    else if(n%2==0){
// 	    for(int i=0;i<n-1;i++)
// 	    {
// 	        if(s[i]==s[i+1])
// 	        {count++;i++;}
            
//         }
// 	    // if(2*count==n)cout<<"YES"<<endl;
// 	    // else cout<<"NO"<<endl;
//         cout<<s<<endl;
	    
// 	}
//     }
// 	return 0;
// }
