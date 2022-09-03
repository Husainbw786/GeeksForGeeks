class Solution{
  public:
/*You are required to complete this method*/
    int wildCard(string pattern,string str)
    {
        int n = pattern.size();
        int m = str.size();
        bool dp[n+1][m+1];
        int i,j;
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(j==0)
                {
                    if(i == 0)
                    {
                        dp[i][j] = true;
                    }
                    else if(pattern[i-1] == '*')
                    {
                        dp[i][j] = dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
                else if( i == 0)
                {
                    dp[i][j] = false;
                }
                else
                {
                    if(pattern[i-1] == str[j-1] || pattern[i-1] == '?')
                    {
                        dp[i][j] = dp[i-1][j-1];
                    }
                    else if(pattern[i-1] == '*')
                    {
                        dp[i][j] = dp[i][j-1] || dp[i-1][j-1] || dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j] = false;
                    }
                }
            }
        }
        return dp[n][m];
        
    }
};
