class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) 
    {
        int n=nums.size(),ans=0;
        int dp=0;
        if(nums.size() < 3)
            return 0;
        
        else{
        for(int i=2;i<n;i++)
        {
            if((nums[i]-nums[i-1]) == (nums[i-1]-nums[i-2]))
            {
                dp++;
                ans+=dp;
            }
            else dp=0;
            
        }
          return ans;  
        }
        
        
    }
};