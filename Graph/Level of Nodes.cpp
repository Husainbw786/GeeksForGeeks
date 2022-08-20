class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    // code here
	    queue<int>q;
	    int level = 0;
	    vector<int>Vis(V,0);
	    if(X == 0)
	    {
	        return 0;
	    }
	    q.push(0);
	    while(! q.empty())
	    {
	        int k = q.size();
	        level++;
	        while(k--)
	        {
	             int temp = q.front();
	              q.pop();
	              for( auto x: adj[temp])
	              {
	                  if( x == X)
	                  {
	                      return level;
	                  }
	                  if(!Vis[x])
	                  {
	                      q.push(x);
	                      Vis[x] = 1;
	                  }
	              }
	        }
	    }
	    return -1;
	}
};
