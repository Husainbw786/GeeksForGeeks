class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>v;
        queue<int>q;
        q.push(0);
        vector<int>vis(V,0);
        vis[0] = 1;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            v.push_back(temp);
            for(auto x : adj[temp])
            {
                if(!vis[x])
                {
                    vis[x] = 1;
                    q.push(x);
                }
            }
        }
        return v;
    }
};
