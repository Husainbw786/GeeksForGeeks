class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool Solve(int source,vector<int>&vis, vector<int>&order,vector<int>adj[])
    {
        vis[source] = 1;
        order[source] = 1;
        for(auto x : adj[source])
        {
            if(!vis[x])
            {
                bool conf = Solve(x,vis,order,adj);
                if(conf == true)
                {
                    return true;
                }
            }
            else if(order[x])
            {
                return true;
            }
        }
        order[source] = 0;
        return false;
    }
    
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>order(V,0);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                bool c = Solve(i,vis,order,adj);
                if(c == true)
                {
                    return true;
                }
            }
        }
        return false;
    }
};
