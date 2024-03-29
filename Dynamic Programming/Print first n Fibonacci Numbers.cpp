class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long int>dp(n,0);
        int i;
        dp[0] = 1;
        dp[1] = 1;
        for(i=2;i<n;i++)
        {
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp;
    }
};
