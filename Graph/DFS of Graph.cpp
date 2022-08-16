class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int>v;
    void Solve(int x, vector<int>&vis, vector<int>adj[])
    {
        vis[x] = 1;
        v.push_back(x);
        for(auto it : adj[x])
        {
            if(!vis[it])
            {
                Solve(it,vis,adj);
            }
        }
    }
    
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        v.clear();
        vector<int>vis(V,0);
        Solve(0,vis,adj);
        return v;
    }
};
