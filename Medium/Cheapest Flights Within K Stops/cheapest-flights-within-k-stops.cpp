//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K)  {
        // Code here
        vector<pair<int,int>>adj[n];
        for(auto x : flights)
        {
            int u = x[0];
            int v = x[1];
            int w = x[2];
            adj[u].push_back({v,w});
        }
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        vector<int>dis(n,1e9);
        dis[src] = 0;
        while(!q.empty())
        {
            int stops = q.front().first;
            int node = q.front().second.first;
            int cost = q.front().second.second;
            q.pop();
            if(stops > K)
            {
                continue;
            }
            for(auto x : adj[node])
            {
                int adjNode = x.first;
                int adjCost = x.second;
                if(cost + adjCost < dis[adjNode])
                {
                    dis[adjNode] = cost + adjCost;
                    q.push({stops+1,{adjNode,adjCost+cost}});
                }
            }
        }
        if(dis[dst] == 1e9)
        {
            return -1;
        }
        return dis[dst];
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends