class Solution {
public:
    int xorOperation(int n, int start) {
        
        int nums[n];
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
        }
        
        int a=0;
        for(auto i :nums)
        {
            a ^= i;
        }
        
        return a;
    }
};