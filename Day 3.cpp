class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int m=nums1.size();
        int n=nums2.size();
         vector<int> nums3;
        nums3.insert(nums3.begin(), nums1.begin(), nums1.end());
         nums3.insert(nums3.end(),nums2.begin(), nums2.end());
      
        
        sort(nums3.begin(), nums3.end());
        
        int a=nums3.size();
        
        if(a%2==0)
            return (nums3[(a/2)-1] + nums3[(a/2)] ) / 2.0;
        else 
            return nums3[a/2];
    }
};