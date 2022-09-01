class Solution{   
public:
    bool isSubsetSum(vector<int>a, int sum){
        // code here 
        int n = a.size();
        bool dp[n+1][sum];
        int i,j;
        for(i=0;i<n+1;i++)
        {
            dp[i][0] = true;
        }
        for(i=1;i<sum+1;i++)
        {
            dp[0][i] = false;
        }
        for(i=1;i<n+1;i++)
        {
            for(j=1;j<sum+1;j++)
            {
                if(a[i-1] <= j)
                {
                    dp[i][j] = dp[i-1][j] || dp[i-1][j - a[i-1]];
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
};
