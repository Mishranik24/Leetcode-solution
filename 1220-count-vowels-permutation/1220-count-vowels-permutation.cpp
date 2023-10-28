class Solution {
public:
    int countVowelPermutation(int n) {
        vector<long long> dp(5,1);
        long long a,b,c,d,e;
        int mod=1000000007;
        for(int i=1;i<n;i++)
        {
            a=dp[0];
            b=dp[1];
            c=dp[2];
            d=dp[3];
            e=dp[4];
            dp[0]=(b+c+e)%mod;
            dp[1]=(a+c)%mod;
            dp[2]=(b+d)%mod;
            dp[3]=c%mod;
            dp[4]=(c+d)%mod;
        }
        return (dp[0]+dp[1]+dp[2]+dp[3]+dp[4])%mod;
    }
};