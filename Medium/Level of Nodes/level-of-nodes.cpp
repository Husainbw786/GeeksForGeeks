//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

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


//{ Driver Code Starts.


int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
    	int V, E, X;
    	cin >> V >> E;

    	vector<int> adj[V];

    	for(int i = 0; i < E; i++)
    	{
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	cin>>X;

    	Solution obj;
    	cout << obj.nodeLevel(V, adj, X) << "\n";
    }

    return 0;
}


// } Driver Code Ends