class Solution {
public:
    int lengthOfLastWord(string s) {
        
        int count=0;
       for(int i=(s.size()-1);i>=0;i--)
       {
           if(count==0 && s[i]==' ')
               continue;
           else if( (s[i]>='a'||s[i]>='A') && (s[i]<='z' || s[i]>='Z'))
               count++;
           else break;
       }
        
        return count;
    }
};