class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int l=k,r=k;
        int min_v=nums[k]; 
        int max_s=min_v; 
        while(l>0 || r<nums.size()-1)
        {
            if(l==0 || (r<nums.size()-1 && nums[r+1]>nums[l-1])) 
            {
                r++;  
            } 
            else
            {
                l--; 
            }
            min_v=min(min_v,min(nums[l],nums[r]));
            max_s = max(max_s,min_v*(r-l+1));
        }
        return max_s;  
    }
};