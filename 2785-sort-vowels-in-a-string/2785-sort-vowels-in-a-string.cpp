class Solution {
public:
    string sortVowels(string s) {
        string vowels = "AEIOUaeiou";
        unordered_map<char, int> count;

        for (char v : vowels) {
            count[v] = 0;
        }

        for (char c : s) {
            if (vowels.find(c) != string::npos) {
                count[c]++;
            }
        }

        string ans = "";
        int index = 0;

        for (char c : s) {
            while (index < 10 && count[vowels[index]] == 0) {
                index++;
            }
            if (index < 10 && vowels.find(c) != string::npos) {
                count[vowels[index]]--;
                ans += vowels[index];
            } else {
                ans += c;
            }
        }
        return ans;
    }
};