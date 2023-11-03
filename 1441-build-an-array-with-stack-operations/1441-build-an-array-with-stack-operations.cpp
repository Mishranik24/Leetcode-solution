class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        sort(target.begin(),target.end());
        vector<string>ans;
        int i=0;
        int j=1;
        while(i<target.size() && j<=n)
        {
            if(j==target[i])
            {
                ans.push_back("Push");
                i++;
                j++;
            }
            else
            {
                ans.push_back("Push");
                ans.push_back("Pop");
                j++;
            }
        }
        return ans;
    }
};