//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
       int maxProfit(vector<int>&prices){
        int n = prices.size();
        vector<int>left(n,0),right(n,0);
        if(n==1) {
            return 0;
        }
        int maxi = prices[n-1], diff = INT_MIN;
        for(int i=n-2; i>=0; i--) {
            diff = max(diff,maxi-prices[i]);
            right[i] = diff;
            maxi = max(prices[i],maxi);
        }
        int mini = prices[0];
        diff = INT_MIN;
        for(int i=1; i<n; i++) {
            diff = max(diff,prices[i]-mini);
            left[i] = diff;
            mini = min(prices[i],mini);
        }   
        int ans = INT_MIN;
        for(int i=0; i<n-1; i++) {
            ans = max(ans,left[i]+right[i+1]);
        }
        ans = max(right[0],ans);
        if(ans<=0) {
            return 0;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    }

}

// } Driver Code Ends