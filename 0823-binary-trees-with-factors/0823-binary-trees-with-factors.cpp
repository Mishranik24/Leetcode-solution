class Solution {
public:
    unordered_map<int,long long int>m;
    unordered_set<int>s;
    long long int countTrees(int a,vector<int>&arr)
    {   
        if(m[a])return m[a];
        long long int ct=1;
        for(auto ele:arr)
        {
            if(!(a%ele) && s.find(a/ele)!=s.end())
            {
                ct+=countTrees(ele,arr)*countTrees(a/ele,arr);
            }
        }
        
        return m[a]=ct;
    }
    int numFactoredBinaryTrees(vector<int>& arr)
    {   
        for(auto ele:arr)
        {
            s.insert(ele);
        }  
        long long int ans=0,n=1e9+7;
        for(auto ele:arr)
        {
            ans+=countTrees(ele,arr);
            ans%=n;
        }
        return ans;
    }
};