class Solution 
{
    public:
    //Function to find a Mother Vertex in the Graph.
    int bfs(int node, vector<int>adj[],int V)
    {
        vector<int>vis(V,false);
        queue<int>q;
        q.push(node);
        vis[node] = true;
        while(!q.empty())
        {
            int temp = q.front();
            q.pop();
            for(auto x : adj[temp])
            {
                if(vis[x] == false)
                {
                    vis[x] = true;
                    q.push(x);
                
                }
            }
        }
        for(int i=0;i<vis.size();i++)
        {
            if(vis[i] == false)
            {
                return -1;
            }
        }
        return node;
        
    }
    
	int findMotherVertex(int V, vector<int>adj[])
	{
	    // Code here
	    for(int i=0;i<V;i++)
	    {
	        int ans = bfs(i,adj,V);
	        if(ans != -1)
	        {
	            return ans;
	        }
	        return -1;
	    }
	}

};
