//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    
    bool dfs(int i, vector<int>adj[], vector<int>&vis, vector<int>&path)
    {
        vis[i] = 1;
        path[i] = 1;
        for(auto x : adj[i])
        {
            if(!vis[x])
            {
                if(dfs(x,adj,vis,path) == true)
                {
                    return true;
                }
            }
            else if(path[x])
            {
                return true;
            }
        }
        path[i] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>path(V,0);
        int i;
        for(i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(i,adj,vis,path) == true)
                {
                    return true;
                }
            }
        }
        return false;
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
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends