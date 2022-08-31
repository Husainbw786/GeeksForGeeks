class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        // your code here
        int mod = 1e9+7;
       
        long long dp[n+1];
        dp[1] = 1;
        dp[2] = 2;
        dp[3] = 4;
        int i;
        for(i=4;i<=n;i++)
        {
            dp[i] = (dp[i-3] + dp[i-2] + dp[i-1]) % mod;
        }
        return dp[n]%mod;
        
        
    }
};
