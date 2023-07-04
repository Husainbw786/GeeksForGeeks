//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
        unordered_map<int,int>mp;
        int count = 0;
        int ans = 0;
        int i;
        for(i=0;i<n;i++)
        {
            if(nums[i] % 2 != 0)
            {
                count++;
            }
            if(count == k)
            {
               ans++;
            }
            if(mp.find(count-k) != mp.end())
            {
                ans += mp[count-k];
            }
            mp[count]++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends