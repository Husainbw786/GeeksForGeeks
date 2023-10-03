//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        // code here
        vector<int>dis(N,INT_MAX);
        int i;
        vector<int>adj[N];
        for(auto x : edges)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
        queue<pair<int,int>>q;
        q.push({src,0});
        dis[src] = 0;
        while(!q.empty())
        {
            int temp = q.front().first;
            int dist = q.front().second;
            q.pop();
            for(auto x : adj[temp])
            {
                if(dist + 1 < dis[x])
                {
                    dis[x] = dist+1;
                    q.push({x,dist+1});
                }
              
            }
        }
        vector<int>ans(N,-1);
        for(int i=0;i<N;i++)
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
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i) {
            vector<int> temp;
            for(int j=0; j<2; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }

        int src; cin >> src;

        Solution obj;

        vector<int> res = obj.shortestPath(edges, n, m, src);

        for (auto x : res){
            cout<<x<<" ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends