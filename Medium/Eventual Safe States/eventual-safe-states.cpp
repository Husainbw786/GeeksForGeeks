//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
   bool dfs(int node,vector<int>adj[], vector<int>&vis,vector<int>&path,
   vector<int>&check)
   {
       vis[node] = 1;
       check[node] = 0;
       path[node] = 1;
       for(auto x : adj[node])
       {
           if(!vis[x])
           {
               if(dfs(x,adj,vis,path,check))
               {
                   check[x] = 0;
                   return true;
               }
           }
           else if(path[x] == 1)
           {
               check[x] = 0;
               return true;
           }
       }
       check[node] = 1;
       path[node] = 0;
       return false;
       
   }
  
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>vis(V,0);
        vector<int>path(V,0);
        vector<int>check(V,0);
        vector<int>safe;
        int i;
        for(i=0;i<V;i++)
        {
            if(!vis[i])
            {
                dfs(i,adj,vis,path,check);
            }
        }
        for(i=0;i<V;i++)
        {
            if(check[i] == 1)
            {
                safe.push_back(i);
            }
        }
        return safe;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends