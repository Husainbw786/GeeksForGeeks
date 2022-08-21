class Solution {
public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int>dist(n,INT_MAX);
	    dist[0] = 0;
	   
	    for( int i=0;i<n-1;i++)
	    {
	        for(auto x : edges)
	        {
	            int u = x[0];
	            int v = x[1];
	            int w = x[2];
        	            
        	    if(dist[u] + w < dist[v] && dist[u] != INT_MAX)
        	    {
        	        dist[v] = dist[u] + w;
        	    }
	        }
	    }
	    for( auto x : edges)
	    {
	        int u = x[0];
	        int v = x[1];
	        int w = x[2];
	        
	        if(dist[u] + w < dist[v])
	        {
	            return 1;
	        }
	    }
	    return 0;
	}
};
