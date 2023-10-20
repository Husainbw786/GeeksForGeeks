//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
  
  int solve(int i,int sum, int n, int arr[],vector<vector<int>>&dp,int total)
  {
      if(i == n)
      {
          return abs(total-2*sum);
      }
      if(dp[i][sum] != -1)
      {
          return dp[i][sum];
      }
      int not_take = solve(i+1,sum,n,arr,dp,total);
      int take = solve(i+1,sum + arr[i],n,arr,dp,total);
      return dp[i][sum] = min(take,not_take);
  }
  
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int total = 0;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        total += arr[i];
	    }
	    vector<vector<int>>dp(n,vector<int>(total+1,-1));
	    
	    return solve(0,0,n,arr,dp,total);
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends