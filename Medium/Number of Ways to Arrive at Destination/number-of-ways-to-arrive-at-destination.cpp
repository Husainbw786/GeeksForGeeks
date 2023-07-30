//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countPaths(int n, vector<vector<int>>& roads) {
        // code here
        
        vector<pair<int, int>> adj[n];
        for (auto it : roads)
        {
            adj[it[0]].push_back({it[1], it[2]});
            adj[it[1]].push_back({it[0], it[2]});
        }
        priority_queue<pair<long,int>, vector<pair<long,int>>, greater<pair<long,int>>>pq;
        vector<long>dis(n,1e18);
        vector<int>ways(n,0);
        dis[0] = 0;
        ways[0] = 1;
        int mod = (int)(1e9 + 7);
        
        pq.push({0,0});
        while(!pq.empty())
        {
            int distance = pq.top().first;
            int node = pq.top().second;
            pq.pop();
            for(auto x : adj[node])
            {
                int adjNode = x.first;
                long int adjDis = x.second;
                if(adjDis + distance < dis[adjNode])
                {
                    dis[adjNode] = adjDis + distance;
                    ways[adjNode] = ways[node];
                    pq.push({adjDis+distance,adjNode});
                }
                else if(adjDis + distance == dis[adjNode])
                {
                    ways[adjNode] = (ways[adjNode] + ways[node])%mod;
                }
            }
        }
        return ways[n-1]%mod;
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int u, v;

        vector<vector<int>> adj;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }

        Solution obj;
        cout << obj.countPaths(n, adj) << "\n";
    }

    return 0;
}
// } Driver Code Ends