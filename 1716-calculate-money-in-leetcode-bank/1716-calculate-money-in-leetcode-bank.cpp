class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int i=1;
        int j=i;
        int n1=0;
        while(n1<n)
        {
            n1++;
            ans+=j;
            j++;
            if(n1%7==0)
            {
                i++;
                j=i;
            }
        }
        return ans;
    }
};