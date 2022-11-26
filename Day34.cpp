#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string str,s="";
        cin>>str;
        for(int i=0;i<str.length();i++){
            s=s+str[i]+str[i];
        }
    
      cout<<s<<endl;
        

    }
    return 0;
}
	