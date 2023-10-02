//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{

	public:
	 int MOD = 1e9 + 7;
	int solve(int idx, int arr[],int target,vector<vector<int>>&dp)
	{
	    if(idx==0)
	    {

        if(target==0 && arr[0]==0)
        {
          return 2;  
        }

        if(target== 0 || arr[0]==target)
        {
          return 1;   
        }
        
        return 0;
       }
       if(dp[idx][target] != -1)
       {
           return dp[idx][target];
       }
	    int not_pick = solve(idx-1,arr,target,dp);
	    int pick = 0;
	    if(arr[idx] <= target)
	    {
	        pick = solve(idx-1,arr,target - arr[idx],dp);
	    }
	    return dp[idx][target] = (pick + not_pick) % MOD;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here
        vector<vector<int>>dp(n,vector<int>(sum + 1, -1));
        return solve(n-1,arr,sum,dp) % MOD;
	}
	  
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends