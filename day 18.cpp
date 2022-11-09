#include<iostream>
 
using namespace std;
 
int main(){
 
 
long long int t;
cin>>t;
while(t--){
    long long int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        sum=sum+a[i];
    }
 
    cout<<abs(sum)<<endl;
 
}
}