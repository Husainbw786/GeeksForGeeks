class Solution{
  public:
    int longestPalinSubseq(string A) {
        //code here
        int n = A.size();
         string B = A;
        reverse(B.begin(),B.end());
        
        int dp[n+1][n+1];
        int i,j;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(A[i-1] == B[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                }
            }
        }
        return dp[n][n];
    }
};
