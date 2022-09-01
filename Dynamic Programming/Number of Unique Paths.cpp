class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        int dp[a][b];
        int i,j;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 1;
                }
                else
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j-1]; 
                }
            }
        }
        return dp[a-1][b-1];
        
    }
};
