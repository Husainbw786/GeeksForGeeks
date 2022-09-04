class Solution{
public:
    int maxSquare(int n, int m, vector<vector<int>> mat){
        // code here
        int i,j;
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        if( n == 0)
        {
            return 0;
        }
        int max = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(mat[i-1][j-1] == 1)
                {
                   dp[i][j] = 1 + min( min(dp[i-1][j],dp[i][j-1]), dp[i-1][j-1]);
                   if(dp[i][j] > max)
                   {
                       max = dp[i][j];
                   }
                }
                
            }
        }
        return max;
        
    }
};
