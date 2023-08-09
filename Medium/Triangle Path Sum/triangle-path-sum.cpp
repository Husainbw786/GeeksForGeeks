//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        // Code here
        int dp[n][n];
        int i,j;
        for(i=0;i<n;i++)
        {
            dp[n-1][i] = triangle[n-1][i];
        }
        for(i=n-2;i>=0;i--)
        {
            for(j=i;j>=0;j--)
            {
                int down = triangle[i][j] + dp[i+1][j];
                int right_down = triangle[i][j] + dp[i+1][j+1];
                dp[i][j] = min(down,right_down);
            }
        }
        return dp[0][0];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends