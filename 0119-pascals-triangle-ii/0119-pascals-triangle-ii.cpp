class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int n=rowIndex;
        vector<vector<int>>ans;
        for(int i=1;i<=n+1;i++)
        {
            vector<int>v;
            for(int j=1;j<=i;j++)
            {
                if(j==1||j==i)
                {
                    v.push_back(1);
                }
                else
                {
                    vector<int>v1(ans[ans.size()-1]);
                    v.push_back(v1[j-2]+v1[j-1]);
                }
            }
            ans.push_back(v);
        }
        return ans[n];
    }
};