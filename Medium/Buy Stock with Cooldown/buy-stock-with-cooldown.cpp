//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
     long long solve(int idx, int buy, vector<long long >prices, vector<vector<long long>>&dp)
    {
        if(idx >= prices.size())
        {
            return 0;
        }
        if(dp[idx][buy] != -1)
        {
            return dp[idx][buy];
        }
        if(buy)
        {
            return dp[idx][buy] = max(-prices[idx] + solve(idx+1,0,prices,dp),solve(idx+1,1,prices,dp));
        }
        else
        {
            return dp[idx][buy] = max(prices[idx]+solve(idx+2,1,prices,dp),solve(idx+1,0,prices,dp));
        }
    }
    
    
    long long maximumProfit(vector<long long>&prices, int n) {
        // Code here
      //  vector<vector<long long>>dp(n,vector<long long>(2,-1));
      //  return solve(0,1,prices,dp);
      
      vector<vector<long long int>> dp(n + 2, vector<long long int>(2, 0));

        // no need to write base case
    
        for (int idx = n - 1; idx >= 0; idx--)
        {
            for (int buy = 0; buy <= 1; buy++)
            {
                // buy
                if (buy == 1)
                    dp[idx][buy] = max(-prices[idx] + dp[idx + 1][0],
                                       0 + dp[idx + 1][1]);
    
                // sell,
                // can not buy right after sell, that why +2
                else
                    dp[idx][buy] = max(prices[idx] + dp[idx + 2][1],
                                       0 + dp[idx + 1][0]);
            }
        }
    
        return dp[0][1];
      
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        vector<long long> prices;
        
        for(int i=0; i<n; ++i){
            long long x; cin>>x;
            prices.push_back(x);
        }
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends