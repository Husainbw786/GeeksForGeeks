//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    
    int solve(int idx, vector<int>heights, vector<int>&dp)
    {
        if(idx == 0)
        {
            return 0;
        }
        if(dp[idx] != -1)
        {
            return dp[idx];
        }
        int one = solve(idx-1,heights,dp) + abs(heights[idx] - heights[idx-1]);
        int second = INT_MAX;
        if(idx > 1)
        {
            second = solve(idx-2,heights,dp) + abs(heights[idx] - heights[idx-2]);
        }
        return dp[idx] = min(one,second);
        
    }
  
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        
       // vector<int>dp(n,-1);
    //    return solve(n-1,height,dp);
        
        
        vector<int>dp(n,0);
        for(int i=1;i<n;i++)
        {
            int one = dp[i-1] + abs(height[i] - height[i-1]);
            int second = INT_MAX;
            if(i > 1)
            {
                second = dp[i-2] + abs(height[i] - height[i-2]);
            }
            dp[i] = min(second,one);
        }
        return dp[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    }
    return 0;
}
// } Driver Code Ends