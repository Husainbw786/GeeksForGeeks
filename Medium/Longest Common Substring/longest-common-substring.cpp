//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
       
        int maxi = 0;
        int i,j;
        int dp[n+1][m+1];
        for(i=0;i<=n;i++)
        {
            for(j=0;j<=m;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    if(S1[i-1] == S2[j-1])
                    {
                        dp[i][j] = 1 + dp[i-1][j-1];
                        maxi = max(dp[i][j],maxi);
                    }
                    else
                    {
                        dp[i][j] = 0;
                    }
                }
            }
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends