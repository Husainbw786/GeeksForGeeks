//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool bfs(int i,vector<int>adj[],vector<int>&vis)
    {
        vis[i]  = 1;
        queue<pair<int,int>>q;
        q.push({i,-1});
        while(!q.empty())
        {
            int temp = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto x : adj[temp])
            {
                if(!vis[x])
                {
                    vis[x] = 1;
                    q.push({x,temp});
                }
                else if(x != parent)
                {
                    return true;
                }
            }
        }
        return false;
    }
    
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<int>vis(V,0);
        int i;
        for(i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(bfs(i,adj,vis))
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
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends