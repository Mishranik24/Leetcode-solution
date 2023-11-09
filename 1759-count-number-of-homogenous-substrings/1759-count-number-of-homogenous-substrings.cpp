class Solution {
public:
    int countHomogenous(string s) {
        int i = 0, n = s.length(), ans = 0 , mod = 1e9 + 7;
        while(i<n){
            char x = s[i];
            long long cnt = 0;
            while(i<n && x == s[i]){
                i++;
                cnt++;
            }
            ans = (ans + (cnt*(cnt+1))/2)%mod;
        }
        return ans;
    }
};