//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  const int Mod=1e9+7;
    int fun(string s1, string s2, int i, int j,vector<vector<int>>&dp){
        if(i>s1.size()){return 0;}
        if(j>=s2.size()){return 1;}
        if(dp[i][j]!=-1){return dp[i][j];}
        int ans1=0;
        if(s1[i]==s2[j]){ans1=fun(s1,s2,i+1,j+1, dp)%Mod;}
        int ans2=fun(s1,s2,i+1,j,dp)%Mod;
        return dp[i][j]=(ans1+ans2)%Mod;
    }
    int countWays(string s1, string s2) {
        vector<vector<int>>dp(s1.size()+1, vector<int>(s2.size()+1, -1));
        return fun(s1,s2,0,0, dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        Solution obj;
        int res = obj.countWays(s1, s2);

        cout << res << endl;
    }
}

// } Driver Code Ends