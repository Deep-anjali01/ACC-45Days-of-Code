// #include <iostream>
// using namespace std;

// int main() {
// 	// your code goes here
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
//         int a,b,c;
//         cin>>a>>b>>c;

//         if(a>b && b>c || c>b && b>a)
//         cout<<b<<endl;
//         else if(b>c && c>a || a>c && c>b)
//         cout<<c<<endl;

//         else if(b>a && a>c || c>a && a>b)
//         cout<<a<<endl;
//     }
// }


#include <iostream>
#include <algorithm>

#include <map>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
       int n;
       cin>>n;
       string s;
       cin>>s;
      map<char,int>m;
          m['a'] = 1;
          m['b'] = 2;
          m['c'] = 3;
          m['d'] = 4;
          m['e'] = 5;
          m['f'] = 6;
          m['g'] = 7;
          m['h'] = 8;
          m['i'] = 9;
          m['j'] = 10;
          m['k'] = 11;
          m['l'] = 12;
          m['m'] = 13;
          m['n'] = 14;
          m['o'] = 15;
          m['p'] = 16;
          m['q'] = 17;
          m['r'] = 18;
          m['s'] = 19;
          m['t'] = 20;
          m['u'] = 21;
          m['v'] = 22;
          m['w'] = 23;
          m['x'] = 24;
          m['y'] = 25;
          m['z'] = 26;


     sort(s.begin(), s.end());
         char a=s[n-1];

     cout << m[a] << endl;

       
    }
}