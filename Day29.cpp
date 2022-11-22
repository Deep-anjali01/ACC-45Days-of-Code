#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    long long int n;
    cin>>n;
    long long int a[n],A[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
 for(int i=0;i<n;i++)
        {
             A[i]=a[i];
        }
    sort(a, a+n);
    
    for(int i=0;i<n;i++){
        if(A[i]==a[n-1])
        cout<<A[i]-a[n-2]<<" ";
        else cout<<A[i]-(a[n-1])<<" ";
    }

    cout<<endl;
   }
}