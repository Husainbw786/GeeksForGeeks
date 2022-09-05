class Solution {
public:

   int lip(int i, int j,vector<vector<int>>&dp,vector<vector<int>>& matrix,int n,int m)
   {
       if(i<0 || j <0  || i >= n || j >= m)
       {
           return 0;
       }
       if(dp[i][j] > 0)
       {
           return dp[i][j];
       }
       int currmax = 1;
       if(i+1 < n && i+1 >=0 && matrix[i+1][j] > matrix[i][j])
       {
           currmax = max(currmax,1+lip(i+1,j,dp,matrix,n,m));
       }
       if(j+1 < m && j+1 >=0 && matrix[i][j+1] > matrix[i][j])
       {
           currmax = max(currmax,1+lip(i,j+1,dp,matrix,n,m));
       }
       if(i-1 < n && i-1 >=0 && matrix[i-1][j] > matrix[i][j])
       {
           currmax = max(currmax,1+lip(i-1,j,dp,matrix,n,m));
       }
         if(j-1 < m && j-1 >=0 && matrix[i][j-1] > matrix[i][j])
       {
           currmax = max(currmax,1+lip(i,j-1,dp,matrix,n,m));
       }
       dp[i][j] = currmax;
       
       
   }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int n = matrix.size();
        int m = matrix[0].size();
        int i,j;
        vector<vector<int>>dp(n,vector<int>(m,0));
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                maxi = max(maxi,lip(i,j,dp,matrix,n,m));
            }
        }
        return maxi;
    }
};
