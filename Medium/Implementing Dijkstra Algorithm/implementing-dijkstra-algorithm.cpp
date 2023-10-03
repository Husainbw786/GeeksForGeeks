//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dis(V,INT_MAX);
        int i;
        priority_queue< pair<int,int>,vector<pair<int,int>>, greater<pair<int,int>> >pq;
        pq.push({S,0});
        dis[S] = 0;
        while(!pq.empty())
        {
            int node = pq.top().first;
            int d = pq.top().second;
            pq.pop();
            for(auto x : adj[node])
            {
                int next = x[0];
                int wt = x[1];
                if(wt + d < dis[next])
                {
                    dis[next] = wt+d;
                    pq.push({next,wt+d});
                }
            }
        }
        vector<int>ans(V,-1);
        for(i=0;i<V;i++)
        {
            if(dis[i] != INT_MAX)
            {
                ans[i] = dis[i];
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends