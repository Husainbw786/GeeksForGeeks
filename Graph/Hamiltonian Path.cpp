class Solution
{
    bool dfs(int src,int c ,vector<int> adj[],int n,int m,vector<int>&vis)
    {
        if(c == n)
        {
            return true;
        }
        vis[src] = 1;
        for(auto x : adj[src])
        {
            if(!vis[x])
            {
                if(dfs(x,c+1,adj,n,m,vis))
                {
                    return true;
                }
            }
        }
        vis[src] = 0;
        return false;
    }
    
    
    public:
    bool check(int n,int m,vector<vector<int>> Edges)
    {
        // code here
        vector<int>adj[n+1];
        int i,j;
        
      for(i=0;i<Edges.size();i++)
      {
          int u = Edges[i][0];
          int v = Edges[i][1];
          adj[u].push_back(v);
          adj[v].push_back(u);
      }
    
        vector<int>vis(n+1,0);
        for(i=0;i<n;i++)
        {
            if(dfs(i,1,adj,n,m,vis))
            {
                return true;
            }
        }
        return false;
    }
};
