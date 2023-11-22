class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        queue<pair<int,int>>q;
        int m=nums.size();
        vector<int>ans;
        q.push({0,0});
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            ans.push_back(nums[x][y]);
            if(!y && x+1<m)
            {
                q.push({x+1,0});
            }
            if(y+1<nums[x].size())
            {
                q.push({x,y+1});
            }
        }
        return ans;
    }
};