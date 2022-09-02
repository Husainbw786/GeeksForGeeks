class Solution{
	public:
	int MinCoin(vector<int>coins, int amt)
	{
	    // Code here
	    int i,j;
	    int n = coins.size();
	    int dp[n+1][amt+1];
	    for(i=0;i<=n;i++)
	    {
	        for(j=0;j<=amt;j++)
	        {
	            if(j==0)
	            {
	                dp[i][j] = 0;
	            }
	            else if(i == 0)
	            {
	                dp[i][j] = 1e5;
	            }
	            else if(coins[i-1] > j)
	            {
	                dp[i][j] = dp[i-1][j];
	            }
	            else
	            {
	                dp[i][j] = min( 1 + dp[i][j-coins[i-1]], dp[i-1][j] );
	            }
	        }
	       
	    }
	    return dp[n][amt]>1e4 ? -1:dp[n][amt];
	}
};
