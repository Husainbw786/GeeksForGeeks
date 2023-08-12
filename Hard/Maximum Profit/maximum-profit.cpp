//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
     int solve(int idx, int buy, int cap, int prices[],vector<vector<vector<int>>>&dp, int n)
    {
        if(idx == n || cap == 0)
        {
            return 0;
        }
        if(dp[idx][buy][cap] != -1)
        {
            return dp[idx][buy][cap];
        }
        if(buy)
        {
            return dp[idx][buy][cap] =  max(-prices[idx] + solve(idx+1,0,cap,prices,dp,n),solve(idx+1,1,cap,prices,dp,n));
        }
        else
        { 
            return dp[idx][buy][cap] = max(prices[idx] + solve(idx+1,1,cap-1,prices,dp,n),solve(idx+1,0,cap,prices,dp,n));
        }
    }
    
  
    int maxProfit(int K, int N, int A[]) {
        // code here
        
       
        vector<vector<vector<int>>>dp(N,vector<vector<int>>(2,vector<int>(K+1,-1)));
        return solve(0,1,K,A,dp,N);
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) cin >> A[i];

        Solution ob;
        cout << ob.maxProfit(K, N, A) << endl;
    }
    return 0;
}
// } Driver Code Ends