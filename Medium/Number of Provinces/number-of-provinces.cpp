//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  
    void dfs(int i,vector<int>adj[],vector<int>&vis)
    {
        vis[i] = 1;
        for(auto x : adj[i])
        {
            if(!vis[x])
            {
                dfs(x,adj,vis);
            }
        }
    }
  
  
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        int i,j;
        vector<int>adjlist[V];
        int n = adj.size();
        int m =adj[0].size(); 
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(adj[i][j] == 1 && i != j)
                {
                    adjlist[i].push_back(j);
                    adjlist[j].push_back(i);
                }
            }
        }
        vector<int>vis(V,0);
        int count = 0;
        for(i=0;i<V;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(i,adjlist,vis);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends