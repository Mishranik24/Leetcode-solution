class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        map<char,int>m;
        for(int i=0;i<chars.size();i++)
        {
            m[chars[i]]++;
        }
        int ans=0;
        for(int i=0;i<words.size();i++)
        {
            map<char,int>m1;
            for(int j=0;j<words[i].size();j++)
            {
                m1[words[i][j]]++;
            }
            int f=1;
            for(auto it:m1)
            {
                char ch=it.first;
                int n=it.second;
                if(m[ch]<n)
                {
                    f=0;
                    break;
                }
            }
            if(f==1)
            {
                ans+=words[i].size();
            }
        }
        return ans;
    }
};