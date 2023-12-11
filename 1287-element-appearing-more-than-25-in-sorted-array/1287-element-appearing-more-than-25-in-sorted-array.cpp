class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n=arr.size();
        int ans=n*0.25;
        int var=0;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[arr[i]]++;
        }
        for(auto it:m)
        {
            if(it.second>ans)
            {
                var=it.first;
            }
        }
        return var;
    }
};