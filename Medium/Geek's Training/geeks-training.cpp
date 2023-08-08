//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    int solve(int days,int prev,vector<vector<int>>points,vector<vector<int>>&dp)
    {
        if(days == 0)
        {
            int maxi = 0;
            for(int i=0;i<3;i++)
            {
                if(i != prev)
                {
                    maxi = max(points[days][i],maxi);
                }
            }
            return maxi;
        }
        if(dp[days][prev] != -1)
        {
            return dp[days][prev];
        }
        int maxi = 0;
        for(int i=0;i<3;i++)
        {
            if(prev != i)
            {
              int point = points[days][i] + solve(days-1,i,points,dp);
              maxi = max(point,maxi);  
            }
            
        }
        return dp[days][prev] = maxi;
    }
  
    int maximumPoints(vector<vector<int>>& points, int n) {
         // Code here
        // vector<vector<int>>dp(n,vector<int>(4,-1));
        // return solve(n-1,3,points,dp);
        int dp[n][3];
        int i;
        for(i=0;i<3;i++)
        {
            dp[0][i] = points[0][i];
        }
        for(i=1;i<n;i++)
        {
            dp[i][0] = max(dp[i-1][1],dp[i-1][2]) + points[i][0];
            dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + points[i][1];
            dp[i][2] = max(dp[i-1][1],dp[i-1][0]) + points[i][2];
        }
        int maxi = 0;
        for(i=0;i<3;i++)
        {
            maxi = max(dp[n-1][i],maxi);
        }
        return maxi;
    }
};







//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> points;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            points.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(points, n) << endl;
    }
    return 0;
}
// } Driver Code Ends