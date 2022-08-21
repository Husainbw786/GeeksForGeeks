class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    
    void dfs(vector<int> adj[], vector<bool>&vis,int src,int c ,int d)
    {
        vis[src] = true;
        for(auto  &x : adj[src])
        {
            if( (src == c && x == d) || vis[x])
            {
                continue;
            }
            dfs(adj,vis,x,c,d);
        }
    }
    
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        vector<bool>vis(V,false);
        dfs(adj,vis,c,c,d);
        return !vis[d];
    }
};
