//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

	public:
	
	int solve(int idx, int target, int coins[], vector<vector<int>>&dp)
	{
	    if(idx == 0)
	    {
	        if(target % coins[idx] == 0)
	        {
	            return target/coins[idx];
	        }
	        else
	        {
	            return 1e9;
	        }
	    }
	    if(dp[idx][target] != -1)
	    {
	        return dp[idx][target];
	    }
	    int not_take = solve(idx-1,target,coins,dp);
	    int take = INT_MAX;
	    if(coins[idx] <= target)
	    {
	        take = 1 + solve(idx,target-coins[idx],coins,dp);
	    }
	    return dp[idx][target] = min(take,not_take);
	}
	
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    vector<vector<int>>dp(M,vector<int>(V+1,-1));
	    int result = solve(M-1,V,coins,dp);
	    if(result >= 1e9)
	    {
	        return -1;
	    }
	    return result;
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends