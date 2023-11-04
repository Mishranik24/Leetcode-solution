class Solution {
public:
    int getLastMoment(int n, vector<int>& left, vector<int>& right) {
        sort(left.begin(),left.end());
        sort(right.begin(),right.end());
        int p=-1,r=-1;
        if(right.size()>0)
        p=n-right[0];
        if(left.size()>0)
        r=left[left.size()-1];
        int ans=max(p,r);
        return ans;
        
    }
};