//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    void topo(int i, vector<int>&vis, vector<pair<int,int>>adj[],stack<int>&st)
    {
        vis[i] = 1;
        for(auto x : adj[i])
        {
            if(!vis[x.first])
            {
                topo(x.first,vis,adj,st);
            }
        }
        st.push(i);
    }
  
     vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
        // code here
        
        vector<pair<int,int>>adj[N];
        int i;
        for(i=0;i<M;i++)
        {
            int u = edges[i][0];
            int v = edges[i][1];
            int w = edges[i][2];
            adj[u].push_back({v,w});
        }
        stack<int>st;
        vector<int>vis(N,0);
        for(i=0;i<N;i++)
        {
            if(!vis[i])
            {
                topo(i,vis,adj,st);
            }
        }
       
        vector<int>dis(N,1e9);
        dis[0] = 0;
        while(!st.empty())
        {
            int temp = st.top();
            st.pop();
            for(auto x : adj[temp])
            {
                int v = x.first;
                int wt = x.second;
                if(dis[temp] + wt < dis[v])
                {
                    dis[v] = dis[temp] + wt;
                }
            }
        }
        vector<int>ans(N,-1);
        for(i=0;i<N;i++)
        {
            if(dis[i] != 1e9)
            {
                ans[i] = dis[i];
            }
        }
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
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