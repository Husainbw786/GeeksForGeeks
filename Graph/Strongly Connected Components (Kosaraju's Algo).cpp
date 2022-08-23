class Solution
{
	public:
	//Function to find number of strongly connected components in the graph.
	vector<int>order;
	
	void dfs(int src,vector<int>&vis,vector<int>adj[])
	{
	    vis[src] = 1;
	    for(auto x : adj[src])
	    {
	        if(!vis[x])
	        {
	            dfs(x,vis,adj);	        }
	    }
	    order.push_back(src);
	}
	
	void rdfs(int src, vector<int> & vis1 ,vector<int>rev[])
	{
	    vis1[src] = 1;
	    for(auto x : rev[src])
	    {
	        if(!vis1[x])
	        {
	            rdfs(x,vis1,rev);
	        }
	    }
	}
	
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        order.clear();
        vector<int>rev[V];
        int k;
        for(k=0;k<V;k++)
        {
            for(auto x : adj[k])
            {
                rev[x].push_back(k);
            }
        }
        vector<int>vis(V,0);
        int i;
        for(i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,vis,adj);
            }
        }
        vector<int>vis1(V,0);
        int col = 0;
        for(i=V-1;i>=0;i--)
        {
            if(!vis1[order[i]])
            {
                rdfs(order[i],vis1,rev);
                col++;
            }
        }
        return col;
    }
};
