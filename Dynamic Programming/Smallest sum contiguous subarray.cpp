class Solution{
  public:
  int smallestSumSubarray(vector<int>& a){
      //Code here
      int i;
      int n = a.size();
      vector<int>dp(n+1,0);
      int mn = INT_MAX;
      for(i=1;i<=a.size();i++)
      {
          dp[i] = min(dp[i-1] + a[i-1],a[i-1]);
          mn = min(mn,dp[i]);
      }
     return mn; 
     
  }
};
