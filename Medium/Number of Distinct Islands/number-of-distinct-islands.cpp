//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution {
  public:
  
   void dfs(int x, int y, int i, int j, vector<vector<int>>&grid, vector<pair<int,int>>&v)
   {
       if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || grid[x][y] != 1)
       {
           return;
       }
       v.push_back({x-i,y-j});
       grid[x][y] = 0;
       dfs(x+1,y,i,j,grid,v);
       dfs(x-1,y,i,j,grid,v);
       dfs(x,y+1,i,j,grid,v);
       dfs(x,y-1,i,j,grid,v);
       
   }          
  
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int i,j;
        int n = grid.size();
        int m = grid[0].size();
        set<vector<pair<int,int>>>st;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    vector<pair<int,int>>v;
                    dfs(i,j,i,j,grid,v);
                    st.insert(v);
                }
            }
        }
        return st.size();
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends