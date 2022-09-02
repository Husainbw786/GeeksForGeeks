class Solution {
  public:
  
    int subset(vector<int>A,int sum,int n)
    {
        int dp[n+1][sum+1];
        int i,j;
        for(i=0;i<=n;i++)
        {
            dp[i][0] = 1;
        }
        for(i=1;i<sum+1;i++)
        {
            dp[0][i] = 0;
        }
        for(i=1;i<=n;i++)
        {
            for(j=0;j<=sum;j++)
            {
                if(A[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-A[i-1]];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
  
    int findTargetSumWays(vector<int>&A ,int target) {
        //Your code here
        int sum = 0;
        int n = A.size();
        int i;
        for(i=0;i<n;i++)
        {
            sum = sum + A[i];
        }
        if(target > sum)
        {
            return 0;
        }
        if( (target+sum) % 2 != 0)
        {
            return 0;
        }
        sum = (sum-target) /2;
        return subset(A,sum,n);
    }
};
