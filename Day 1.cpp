#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) { 
        
        stack<char>s1;
        int i=0;
       while(i<s.size())
       {
           if(s[i]=='(' || s[i]=='[' || s[i]=='{')
           { s1.push(s[i]);
               i++;}
               
        
        else {
            
            if(s[i]==')'){  
                
            if(!s1.empty() && s1.top()=='('){ s1.pop(); i++;}
             else return false;
            }
          
             if(s[i]=='}'){  
                
            if(!s1.empty() && s1.top()=='{'){ s1.pop(); i++;}
             else return false;
            }
            
            
             if(s[i]==']'){  
                
            if(!s1.empty() && s1.top()=='['){ s1.pop(); i++;}
             else return false;
            }
        
       }
         
     
    }
         if(s1.empty())
               return true;
            else return false;
        
    }
        
       
};