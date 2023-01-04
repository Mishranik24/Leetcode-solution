class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int,int>m;
        int n=tasks.size();
        for(int i=0;i<n;i++)
        {
            m[tasks[i]]++;
        }
        int ans=0;
        for(auto it:m)
        {
            int x=it.second;
            if(x==1)
            return -1;
            if(x%3==0)
            {
                ans+=x/3;
            }
            else
            {
                   ans+=x/3+1;
            }
        }
        return ans;
    }
};
