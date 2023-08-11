//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:

    int solve(int idx, int cap,int val[], int wt[],vector<vector<int>>&dp)
    {
        if(idx == 0)
        {
            int x = cap/wt[0];
            return val[0]*x;
        }
        if(dp[idx][cap] != -1)
        {
            return dp[idx][cap];
        }
        int not_take = solve(idx-1,cap,val,wt,dp);
        int take = INT_MIN;
        if(wt[idx] <= cap)
        {
            take = val[idx] + solve(idx,cap-wt[idx],val,wt,dp);
        }
        return dp[idx][cap] = max(take,not_take);
    }

    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        vector<vector<int>>dp(N,vector<int>(W+1,-1));
        return solve(N-1,W,val,wt,dp);
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