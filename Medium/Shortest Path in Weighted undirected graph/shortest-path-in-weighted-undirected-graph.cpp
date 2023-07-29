//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
        // Code here
        vector<pair<int,int>>adj[n+1];
        int i;
        for(auto x : edges)
        {
            int u = x[0];
            int v = x[1];
            int w = x[2];
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
            
        }
        
        priority_queue<pair<int,int> ,vector<pair<int,int>>, greater<pair<int,int>>>pq;
    
        vector<int>dis(n+1,1e9);
        vector<int>parent(n+1,1e9);
        for(i=0;i<=n;i++)
        {
            parent[i] = i;
        }
        dis[1] = 0;
        pq.push({0,1});
        while(!pq.empty())
        {
            int node = pq.top().second;
            int dist = pq.top().first;
            pq.pop();
            for(auto x : adj[node])
            {
                int adjNode = x.first;
                int wt = x.second;
                if(dist + wt < dis[adjNode])
                {
                    dis[adjNode] = dist+wt;
                    pq.push({dist+wt,adjNode});
                    parent[adjNode] = node;
                }
            }
        }
        if(dis[n] == 1e9)
        {
            return {-1};
        }
        vector<int>path;
        int node = n;
        while(parent[node] != node)
        {
            path.push_back(node);
            node = parent[node];
        }
        path.push_back(1);
        reverse(path.begin(),path.end());
        return path;
        
    }
};

//{ Driver Code Starts.
int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends