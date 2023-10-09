//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSquares(int n, int m, vector<vector<int>> &matrix) {
        // code here
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        int i,j;
        int sum = 0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(matrix[i-1][j-1] == 1)
                {
                    dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) + 1;
                    sum += dp[i][j];
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        return sum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;

        vector<vector<int>> matrix(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        cout << obj.countSquares(N, M, matrix) << endl;
    }
    return 0;
}
// } Driver Code Ends