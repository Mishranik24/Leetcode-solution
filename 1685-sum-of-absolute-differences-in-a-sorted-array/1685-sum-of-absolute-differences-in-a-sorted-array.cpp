class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        int A=0,B=0;
        for(int x:nums)
        {
            B+=x;
        }
        vector<int>ans(n);
        int i=0;
        for(int x:nums) 
        {
            ans[i]=(2*i-n)*x+B-A;
            A+=x;
            B-=x;
            i++;
        }
        return ans;
    }
};