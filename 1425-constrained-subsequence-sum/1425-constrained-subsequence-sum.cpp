class Solution {
public:
    int constrainedSubsetSum(vector<int>& nums, int k) {
        int n=nums.size();
        int res=nums[0];
        deque<pair<int,int>>q;
        q.push_back({nums[0],0});
        for(int i=1; i<n; i++)
        {
            while(!q.empty() && i-q.front().second>k) 
            {
                q.pop_front();
            }
            int val=max(q.front().first+nums[i], nums[i]);
            while(!q.empty() && q.back().first<val)
            {
                q.pop_back();
            }
            res=max(res, val);
            q.push_back({val, i});
        }
        return res;
    }
};