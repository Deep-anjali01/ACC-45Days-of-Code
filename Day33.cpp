// #include <iostream>

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
//     while(t--){
//         int n,count=0,count2=0,count3=0,count4=0;
//         string s;
//         cin>>n;
//         cin>>s;
//         for(int i=0; i<n; i++){
//             if(s[i]=='1' && s[i+1]=='1'){count++;continue;} 
//             else if(s[i]=='0' && s[i+1]=='0'){count2++;continue;} 

//         }
//         if((count+1)>n/2 )cout<<(count+1)*(count+1)<<endl;
//         else if((count2+1)>n/2) cout<<(count2+1)*(count2+1)<<endl;

//         else if(count<n/2 && count2<n/2)
//         {
//             sort(s.begin(), s.end());
//              for(int i=0; i<n; i++){
//             if(s[i]=='1' ){count3++;continue;} 
//             else {count4++;continue;} 

//         }
//         cout<<count3*count4<<endl;
//         }
//         }
        

// return 0;

//     }
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n;
        cin>>a>>b;
        if(a+b+1<n ||(a==n&&b==n))
        cout<<"YES"<<endl;
        else  cout<<"No"<<endl;

    }
    return 0;
}
	
	

