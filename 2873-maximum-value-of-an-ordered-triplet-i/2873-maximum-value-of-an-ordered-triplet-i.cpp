class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        long long ans=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                long long p=nums[i]-nums[j];
                for(int k=j+1;k<nums.size();k++)
                {
                    long long c=p*nums[k];
                    ans=max(ans,c);
                }
            }
        }
        if(ans<0)
        {
            return 0;
        }
        return ans;
    }
};