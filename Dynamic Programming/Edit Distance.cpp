class Solution {
  public:
    int editDistance(string s, string t) {
        // Code here
        int m = s.length();
        int n = t.length();
        int i,j;
        int dp[m+1][n+1];
        for(i=0;i<=m;i++)
        {
            dp[i][0]  = i;
        }
          for(i=0;i<=n;i++)
        {
            dp[0][i]  = i;
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(s[i-1] == t[j-1])
                {
                    dp[i][j] = dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = 1 + min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                }
            }
        }
        return dp[m][n];
    }
};
