class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int>in(V,0);
	    vector<int>ans;
	    queue<int>q;
	    int i;
	    for(i=0;i<V;i++)
	    {
	        for(auto x:adj[i])
	        {
	            in[x]++;
	        }
	    }
	    for(i=0;i<V;i++)
	    {
	        if(in[i] == 0)
	        {
	            q.push(i);
	        }
	    }
	    while(!q.empty())
	    {
	        int temp = q.front();
	        q.pop();
	        ans.push_back(temp);
	        for(auto x:adj[temp])
	        {
	            in[x]--;
	            if( in[x] == 0)
	            {
	                q.push(x);
	            }
	        }
	    }
	    return ans;
	}
};
