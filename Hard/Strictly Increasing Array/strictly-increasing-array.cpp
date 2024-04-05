//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
	public:
       
       int lis(vector<int>&nums)
       {
            int n = nums.size();
		    int dp[n];
		    dp[0] = 1;
		    int i,j;
		    for(i=1;i<n;i++)
		    {
		        dp[i] = 1;
		        for(j=i-1;j>=0;j--)
		        {
		            if(nums[i] <= nums[j])
		            {
		                continue;
		            }
		            if(i-j <= nums[i] - nums[j])
		            {
		                dp[i] = max(dp[i],1+dp[j]);
		            }
		        }
		    }
		    return *max_element(dp,dp+n);
       }


		int min_operations(vector<int>nums){
		    // Code here
		    return nums.size() - lis(nums);
		   
		}
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        Solution ob;
        int ans = ob.min_operations(nums);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends