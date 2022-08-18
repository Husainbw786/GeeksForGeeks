class Solution {
public:
    void dfs(int source,vector<int>&vis,vector<int>adj[])
    {
        vis[source] = 1;
        for(auto x: adj[source])
        {
            if(!vis[x])
            {
                dfs(x,vis,adj);
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& edges) {
        
        vector<int> adj[n];
        int m = edges.size();
        if(m < n-1)
        {
            return -1;
        }
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>vis(n,0);
        int count = 0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,vis,adj);
            }
        }
        return count-1;
    }
};
