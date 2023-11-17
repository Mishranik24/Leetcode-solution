class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int l=0;
        int r=n-1;
        int maxi=0;
        while(l<r)
        {
            int sum=nums[l]+nums[r];
            maxi=max(maxi, sum);
            l++;
            r--;
        }
        return maxi;
    }
};