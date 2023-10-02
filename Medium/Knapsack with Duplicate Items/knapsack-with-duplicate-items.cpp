//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    
    int solve(int i, int w, int wt[], int val[], vector<vector<int>>&dp)
    {
        if(i == 0)
        {
            if(wt[i] <= w)
            {
                int x = w/wt[0];
                return val[0]*x;
            }
            return 0;
        }
        if(dp[i][w] != -1)
        {
            return dp[i][w];
        }
        int not_pick = solve(i-1,w,wt,val,dp);
        int pick = 0;
        if(w >= wt[i])
        {
            pick = val[i] + solve(i,w-wt[i],wt,val,dp);
        }
        return dp[i][w] =  max(pick,not_pick);
    }

    int knapSack(int n, int W, int val[], int wt[])
    {
        // code here
       vector<vector<int>>dp(n,vector<int>(W+1,-1));
       return solve(n-1,W,wt,val,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends