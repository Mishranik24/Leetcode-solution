//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
   int countsetbits(int n)
	{
        int cnt=0;
        while(n)
        {
            if(n&1)cnt++;
            n>>=1;
        }
        return cnt;
	}
	int is_bleak(int n)
	{
	    for(int i=n-30;i<=n;i++)
	    {
	        if(i>0 && i+countsetbits(i)==n)return 0;
	    }
	    return 1;
	}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_bleak(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends