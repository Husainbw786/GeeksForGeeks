//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        int maxSum(int n)
        {
            //code here.
            vector<int>dp(n+1);
            dp[0] = 0;
            dp[1] = 1;
            int i;
            for(i=2;i<=n;i++)
            {
                dp[i] = dp[i/2] + dp[i/3] + dp[i/4];
                dp[i] = max(i,dp[i]);
            }
            return dp[n];
        }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution ob;
        cout<<ob.maxSum(n)<<"\n";
    }
    return 0;
}
// } Driver Code Ends