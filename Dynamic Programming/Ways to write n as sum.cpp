class Solution
{
    public:
    //Function to count the number of different ways in which n can be 
    //written as a sum of two or more positive integers.
    int countWays(int n)
    {
        // your code here
        vector<int>dp(n+1,0);
        dp[0]=1;
        int i,j;
        for(i=1;i<n;i++)
        {
            for(j=i;j<=n;j++)
            {
                dp[j] += dp[j-i];
            }
        }
        return dp[n];
        
    }
};
