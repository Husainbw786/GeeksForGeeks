//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
  
  void solve(int i, int n, vector<int>nums, vector<int>temp, set<vector<int>>&st)
  {
      if(i == n)
      {
          st.insert(temp);
          return;
      }
      temp.push_back(nums[i]);
      solve(i+1,n,nums,temp,st);
      temp.pop_back();
      solve(i+1,n,nums,temp,st);
      
  }
  
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        set<vector<int>>st;
        vector<int>temp;
        solve(0,n,nums,temp,st);
        for(auto x : st)
        {
            ans.push_back(x);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends