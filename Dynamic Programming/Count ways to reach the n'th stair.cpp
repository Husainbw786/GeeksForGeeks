class Solution
{
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        // your code here
        int mod = 1e9+7;
        vector<int>dp(n+2,0);
        int i;
        dp[0] = 0;
        dp[1] = 1;
        for(i=2;i<=n+1;i++)
        {
            dp[i] = (dp[i-1] % mod + dp[i-2] % mod)%mod;
        }
        return dp[n+1];
    }
};
