//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Back-end complete function Template for C++

class Solution{
public:
   void dfs(int i, int j, vector<int> adj[],
             vector<vector<int> >& vec)
    {
        vec[i][j] = 1;
        for (auto it : adj[j]) {
            if (!vec[i][it]) {
                dfs(i, it, adj, vec);
            }
        }
    }
    vector<vector<int> >
    transitiveClosure(int n, vector<vector<int> > graph)
    {
        // code here
        vector<int> adj[n];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (graph[i][j] == 1 && i != j) {
                    adj[i].push_back(j);
                }
            }
        }
        vector<vector<int> > vec(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            dfs(i, i, adj, vec);
        }
        return vec;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> graph(N, vector<int>(N, -1));
        for(int i = 0;i < N;i++)
            for(int j=0;j<N;j++)
            cin>>graph[i][j];
        
        Solution ob;
        vector<vector<int>> ans = ob.transitiveClosure(N, graph);
        for(int i = 0;i < N;i++)
            {for(int j = 0;j < N;j++)
                cout<<ans[i][j]<<" ";
        cout<<"\n";}
    }
    return 0;
}
// } Driver Code Ends