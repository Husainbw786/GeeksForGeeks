class Solution {
  public:
    // Function to count paths between two vertices in a directed graph.
    
    void dfs(int &count, vector<int>&vis,vector<int>adj[],int s,int d)
    {
        vis[s] = 1;
        if(s == d)
        {
            count++;
            return;
        }
        for(auto x : adj[s])
        {
            if(!vis[x])
            {
                dfs(count,vis,adj,x,d);
                vis[x] = 0;
            }
        }
    }
    
    int countPaths(int V, vector<int> adj[], int source, int destination) {
        // Code here
        vector<int>vis(V,0);
        int count = 0;
        dfs(count,vis,adj,source,destination);
        return count;
       
    }
};
