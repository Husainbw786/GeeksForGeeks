//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to return the total number of possible unique BST.
    long long int mod = 1e9 + 7;
    int solve(int n,vector<long long int>&dp)
    {
        if(n <= 1)
        {
            return 1;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        long long int ans = 0;
        for(int i=1;i<=n;i++)
        {
            ans = (ans % mod) + ((solve(i-1,dp)%mod)*(solve(n-i,dp) % mod)) %mod;
        }
        return dp[n] = ans%mod;
    }
    
    int numTrees(int N) 
    {
        vector<long long int>dp(N+1,-1);
        return solve(N,dp);
    }
};

//{ Driver Code Starts.
#define mod (int)(1e9+7)
int main(){
    
    //taking total testcases
    int t;
    cin>>t;
    while(t--){
        
        //taking total number of elements
        int n;
        cin>>n;
        Solution ob;
        //calling function numTrees()
        cout<<ob.numTrees(n)<<"\n";
    }
}	
// } Driver Code Ends