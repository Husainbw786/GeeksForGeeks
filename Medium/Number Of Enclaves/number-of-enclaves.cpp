//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
    void dfs(int x, int y, vector<vector<int>>&grid, vector<vector<int>>&vis )
    {
      if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] == 0)
      {
          return;
      }
      grid[x][y] = 0;
      dfs(x+1,y,grid,vis);
      dfs(x-1,y,grid,vis);
      dfs(x,y+1,grid,vis);
      dfs(x,y-1,grid,vis);
    }
  
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int ans = 0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if((i == 0 || j == 0 || i == n-1 || j == m-1) && grid[i][j] == 1)
                {
                    dfs(i,j,grid,vis);
                }
            }
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    ans++;
                }
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
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends