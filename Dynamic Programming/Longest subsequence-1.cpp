
class Solution{
public:
    int longestSubsequence(int N, int arr[])
    {
        // code here
        vector<int>dp(N,1);
        int ans = 1;
        int i,j;
        for(i=1;i< N;i++)
        {
            for(j=0;j<i;j++)
            {
                if(abs(arr[j] - arr[i]) == 1)
                {
                    dp[i] = max(dp[i],dp[j]+1);
                }
                
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};
