class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    
    bool dfs(int source, int parent, vector<int>adj[], vector<bool>&vis)
    {
        vis[source] = true;
        for(auto x : adj[source])
        {
            if(!vis[x])
            {
                if(dfs(x,source,adj,vis))
                {
                    return true;
                }
            }
            else if(x != parent)
            {
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>vis(V,false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                bool f = dfs(i,-1,adj,vis);
                if(f)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
