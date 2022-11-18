#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Substring(string str){
    string str2="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
    if(str2.find(str)!=string::npos) return str2.find(str);
    return -1;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        string str;
        int count;
        int n;
        cin>>str;
       count =Substring(str);

        if(count==-1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
       
    }
}