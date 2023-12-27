class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
       int n=colors.size();
        int ans=0;
        char prev=colors[0];
        int prevCost=neededTime[0];
        for(int i=1;i<n;i++)
        {
            char cur=colors[i];
            int curCost=neededTime[i];
            if(prev == cur)
            {
                if(prevCost<=curCost)
                {
                    ans+=prevCost;
                    prev=cur;
                    prevCost=curCost;
                }
                else
                {
                    ans+=curCost;
                }
            }
            else
            {
                prev=cur;
                prevCost=curCost;
            }

        }
        return ans; 
    }
};