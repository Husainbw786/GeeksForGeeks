//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
  void solve(int i, int k, int target, vector<int>nums, vector<int>temp, set<vector<int>>&st)
  {
      if(i == nums.size())
      {
          if(temp.size() == k && target == 0)
          {
              st.insert(temp);
          }
          return;
      }
      
      if(nums[i] <= target)
      {
          temp.push_back(nums[i]);
          solve(i+1,k,target-nums[i],nums,temp,st);
          temp.pop_back();
      }
      solve(i+1,k,target,nums,temp,st);
  }
  
  
    vector<vector<int>> combinationSum(int K, int N) {
        // code here
        vector<int>nums;
        for(int i=1;i<=9;i++)
        {
            nums.push_back(i);
        }
        set<vector<int>>st;
        vector<vector<int>>ans;
        vector<int>temp;
        solve(0,K,N,nums,temp,st);
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> K >> N;

        Solution obj;
        vector<vector<int>> ans = obj.combinationSum(K, N);
        sort(ans.begin(), ans.end());
        for (auto &arr : ans) {
            for (auto it : arr) cout << it << ' ';
            cout << endl;
        }
    }
    return 0;
}
// } Driver Code Ends