//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>rev[V];
        for(int i=0;i<V;i++)
        {
            for(auto it:adj[i])
            {
                rev[it].push_back(i);
            }
        }
        vector<int>inde(V,0);
        for(int i=0;i<V;i++)
        {
            for(auto it:rev[i])
            {
                inde[it]++;
            }
        }
        set<int>s;
        queue<int>q;
        for(int i=0;i<V;i++)
        {
            if(inde[i] == 0)
            {
                s.insert(i);
                q.push(i);
            }
        }
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:rev[node])
            {
                inde[it]--;
                if(inde[it] == 0)
                {
                    q.push(it);
                    s.insert(it);
                }
            }
        }
        vector<int>ans;
        for(auto it:s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends