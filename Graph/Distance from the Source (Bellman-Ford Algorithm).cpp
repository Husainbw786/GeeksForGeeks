class Solution{
	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        vector<int>dist(V,100000000);
        dist[S] = 0;
        int i,j;
        for(i=0;i<V-1;i++)
        {
            for(j=0;j<adj.size();j++)
            {
                int u = adj[j][0];
                int v = adj[j][1];
                int wt = adj[j][2];
                if(dist[u] + wt < dist[v])
                {
                    dist[v] = dist[u] + wt;
                }
            }
        }
        return dist;
    }
};
