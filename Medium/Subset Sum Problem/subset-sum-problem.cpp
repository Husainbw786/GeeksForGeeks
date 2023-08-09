//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    
    bool solve(int idx, vector<int>arr, int target, vector<vector<int>>&dp)
    {
        if(target == 0)
        {
            return true;
        }
        if(idx == 0)
        {
            if(arr[idx] == target)
            {
                return true;
            }
            return false;
        }
        if(dp[idx][target] != -1)
        {
            return dp[idx][target];
        }
        bool not_take = solve(idx-1,arr,target,dp);
        bool take = false;
        if(arr[idx] <= target)
        {
            take = solve(idx-1,arr,target-arr[idx],dp);
        }
        return dp[idx][target] = take | not_take;
    }


    bool isSubsetSum(vector<int>arr, int sum){
        // code here 
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        return solve(n-1,arr,sum,dp);
    }
};


//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends