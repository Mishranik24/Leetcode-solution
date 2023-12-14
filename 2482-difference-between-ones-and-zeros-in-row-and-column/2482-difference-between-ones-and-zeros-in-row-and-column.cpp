class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<vector<int>>v1;
        vector<vector<int>>v2;
        int m = grid.size();
        int n = grid[0].size();
        for(int i=0;i<m;i++)
        {
            int z=0,o=0;
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0)
                    z++;
                else
                    o++;
            }
            v1.push_back({z,o});
        }
        for(int i=0;i<n;i++)
        {
            int z=0,o=0;
            for(int j=0;j<m;j++)
            {
                if(grid[j][i]==0)
                    z++;
                else
                    o++;
            }
            v2.push_back({z,o});
        }
        vector<vector<int>>v3;
        for(int i=0;i<v1.size();i++)
        {
            vector<int>v;
            for(int j=0;j<v2.size();j++)
            {
                int ans=(v1[i][1]+v2[j][1])-(v1[i][0]+v2[j][0]);
                v.push_back(ans);
            }
            v3.push_back(v);
        }
        return v3;
    }
};