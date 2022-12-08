#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
       string str,s="";
       cin>>str;
       for(int i=str.length()-1;i>=0;i--){
         s=s+str[i];
       }
      

       cout<<s+str<<endl;
       
    }
}
