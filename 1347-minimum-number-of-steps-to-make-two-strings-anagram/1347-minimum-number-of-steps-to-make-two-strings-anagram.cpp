class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> count(26, 0);
        int ans = 0;
        for (int i=0; i<s.length(); ++i) {
            int sIndex = s[i]-'a', tIndex = t[i]-'a';
            ++count[sIndex], --count[tIndex];

            if (sIndex == tIndex) continue;
            if (count[sIndex] > 0) ++ans;
            if (count[tIndex] >= 0) --ans;
        }

        return ans;
    }
};