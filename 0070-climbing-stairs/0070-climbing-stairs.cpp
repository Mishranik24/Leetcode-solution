class Solution {
public:
    int climbStairs(int n) {
      int i=1,ans=1,c=1;
        while(i<n)
        {
            int k=ans;
            ans+=c;
            c=k;
            i++;
        }
        return ans;
    }
};