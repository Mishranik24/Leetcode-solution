//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool IsPalindrome(string& str,int i,int j)
    {
        if(i >= j) return true;
        if(str[i]!=str[j]) return false;
        return (IsPalindrome(str,i+1,j-1));
    }
    int palindromicPartition(string str)
    {
        int st=0;
        int n=str.size();
        vector<int>dp(n+1,0);
        for(int i=n-1;i>=0;i--)
        {
            int ans=(int)1e9;
            for(int k=i;k<n;k++)
            {
                if(IsPalindrome(str,i,k) == true)
                {
                    int cur=1+dp[k+1];
                    ans=min(ans,cur);
                }
            }
            dp[i]=ans;
        }
        return dp[0]-1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends