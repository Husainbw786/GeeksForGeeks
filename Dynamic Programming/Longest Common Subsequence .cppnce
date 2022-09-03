class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        int i,j;
       
        int dp[x+1][y+1];
        for(i=0;i<=x;i++)
        {
            for(j=0;j<=y;j++)
            {
                dp[i][j] = 0;
            }
        }
        for(i=1;i<=x;i++)
        {
            for(j=1;j<=y;j++)
            {
                if(s1[i-1] == s2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[x][y];
    }
};
