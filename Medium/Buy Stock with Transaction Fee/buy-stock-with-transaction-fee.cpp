//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    long long solve(int idx, int buy, int fee, vector<long long >prices, vector<vector<long long>>&dp)
    {
        if(idx == prices.size())
        {
            return 0;
        }
        if(dp[idx][buy] != -1)
        {
            return dp[idx][buy];
        }
        if(buy)
        {
            return dp[idx][buy] = max(-prices[idx] + solve(idx+1,0,fee,prices,dp),solve(idx+1,1,fee,prices,dp));
        }
        else
        {
            return dp[idx][buy] = max(prices[idx]-fee+solve(idx+1,1,fee,prices,dp),solve(idx+1,0,fee,prices,dp));
        }
    }
    
    long long maximumProfit(vector<long long>&prices, int n, int fee) {
        // Code here
       // vector<vector<long long>>dp(n,vector<long long>(2,-1));
      //  return solve(0,1,fee,prices,dp);
    

       vector<vector<long long>> dp(n+1, vector<long long>(2, 0));
        
        for(int idx = n-1; idx >= 0; idx--)
        {
            for(int buy = 0; buy <= 1; buy++)
            {
                if(buy)
                {
                    dp[idx][buy] = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
                }
                else
                {
                    dp[idx][buy] = max(prices[idx] - fee + dp[idx+1][1], dp[idx+1][0]);
                }
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
        
        int fee; cin>>fee;
        
        Solution obj;
        cout<<obj.maximumProfit(prices, n, fee)<<"\n";
    }
    return 0;
}
// } Driver Code Ends