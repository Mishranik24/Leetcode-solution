class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int counter=0;
        unordered_set<char>set;
        for(char ch:s) set.insert(ch);
        for(char ch:set)
        {
            int firstIdx=s.find(ch);
            int lastIdx=s.rfind(ch);
            if(lastIdx>firstIdx)
            {
                unordered_set<char> uniqueInBetween;
                for(int i=firstIdx+1;i<lastIdx;i++)
                {
                    uniqueInBetween.insert(s[i]);
                }
                counter+=uniqueInBetween.size();
            }

        }
        return counter;
    }
};