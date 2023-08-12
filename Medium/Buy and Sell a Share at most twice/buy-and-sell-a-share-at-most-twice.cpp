//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++


int solve(int idx, int buy, int cap, vector<int>&prices,vector<vector<vector<int>>>&dp)
    {
        if(idx == prices.size() || cap == 0)
        {
            return 0;
        }
        if(dp[idx][buy][cap] != -1)
        {
            return dp[idx][buy][cap];
        }
        if(buy)
        {
            return dp[idx][buy][cap] =  max(-prices[idx] + solve(idx+1,0,cap,prices,dp),solve(idx+1,1,cap,prices,dp));
        }
        else
        { 
            return dp[idx][buy][cap] = max(prices[idx] + solve(idx+1,1,cap-1,prices,dp),solve(idx+1,0,cap,prices,dp));
        }
    }
    
int maxProfit(vector<int>&price){
    //Write your code here..
    int n = price.size();
    vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
    return solve(0,1,2,price,dp);
}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends