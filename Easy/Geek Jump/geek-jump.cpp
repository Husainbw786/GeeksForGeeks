//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        vector<int>dp(n,0);
        int i;
        for(i=1;i<n;i++)
        {
            int left = dp[i-1] + abs(height[i-1] - height[i]);
            int right = INT_MAX;
            if(i > 1)
            {
                right = dp[i-2] + abs(height[i-2] - height[i]);
            }
            dp[i] = min(left,right);
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