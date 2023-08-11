//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
  public:
  
  int solve(int idx,int len,int price[],vector<vector<int>>&dp)
  {
      if(idx == 0)
      {
          return price[0]*len;
      }
      if(dp[idx][len] != -1)
      {
          return dp[idx][len];
      }
      int not_take = solve(idx-1,len,price,dp);
      int take = INT_MIN;
      int rod_len = idx+1;
      if(rod_len <= len)
      {
          take = price[idx] + solve(idx,len-rod_len,price,dp);
      }
      return dp[idx][len] = max(take,not_take);
  }
  
    int cutRod(int price[], int n) {
        //code here
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return solve(n-1,n,price,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends