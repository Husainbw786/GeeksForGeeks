//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
   int solve(int i,int j1,int j2,vector<vector<int>>&grid, vector<vector<vector<int>>>&dp)
    {
        if( j1 < 0 || j1 >= grid[0].size() || j2 < 0 || j2 >= grid[0].size())
        {
            return -1e8;
        }
        if(dp[i][j1][j2] != -1)
        {
            return dp[i][j1][j2];
        }
        if(i == grid.size()-1)
        {
            if(j1 == j2)
            {
                return grid[i][j1];
            }
            else
            {
                return grid[i][j1] + grid[i][j2];
            }
        }
        int maxi = INT_MIN;
        for(int x =-1;x<=1;x++)
        {
            for(int y=-1;y<=1;y++)
            {
                int value = 0;
                if(j1 == j2)
                {
                    value = grid[i][j1];
                }
                else
                {
                    value = grid[i][j1] + grid[i][j2];
                }
                value += solve(i+1,j1+x,j2+y,grid,dp);
                maxi = max(maxi,value);
            }
        }
        return dp[i][j1][j2] = maxi;
    }
  
    int solve(int n, int m, vector<vector<int>>& grid) {
        // code here
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m, vector<int>(m,-1)));
        return solve(0,0,m-1,grid,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
    }
    return 0;
}
// } Driver Code Ends