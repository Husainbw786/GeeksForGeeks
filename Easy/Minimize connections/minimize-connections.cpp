//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    
        void dfs(int i, vector<int>&vis, vector<int>adj[])
        {
            vis[i] = 1;
            for(auto x : adj[i])
            {
                if(!vis[x])
                {
                    dfs(x,vis,adj);
                }
            }
        }
    
        int minimumConnections(int n , vector<vector<int>> &connections)
        {
            // code here
            int m = connections.size();
            if(m < n-1)
            {
                return -1;
            }
            vector<int>adj[n];

            for(auto x : connections)
            {
                int u = x[0];
                int v = x[1];
                adj[u].push_back(v);
                adj[v].push_back(u);
                
            }
            
            vector<int>vis(n,0);
            int i;
            int count = 0;
            for(i=0;i<n;i++)
            {
                if(!vis[i])
                {
                    count++;
                    dfs(i,vis,adj);
                    
                }
            }
            return count-1;
            
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        vector<vector<int>> connections(m,vector<int> (2));
        for(auto &j:connections)
            cin>>j[0]>>j[1];
        Solution s;
        cout<<s.minimumConnections(n,connections)<<endl;
    }
    return 0;
}
// } Driver Code Ends