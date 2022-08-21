class Solution {
public:

   void dfs(int s, int d, int&count,vector<int>&vis,vector<int>adj[])
   {
       if(s == d)
       {
           count++;
           return;
       }
       vis[s] = 1;
       vector<int>temp = adj[s];
       for(int i=0;i<temp.size();i++)
       {
           if(vis[temp[i]] == 0)
           {
               dfs(temp[i],d,count,vis,adj);
           }
       }
       vis[s] = 0;
   }

	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    // Code here
	    vector<int>adj[n];
	    for(int i=0;i<edges.size();i++)
	    {
	        int u = edges[i][0];
	        int v = edges[i][1];
	        adj[u].push_back(v);
	    }
	    vector<int>vis(n,0);
	    int count = 0;
	    dfs(s,d,count,vis,adj);
	    return count;
	}
};
