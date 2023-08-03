//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    void subset(vector<int> &A, int B, int sum, int idx, vector<vector<int>> &ans, vector<int> &temp){
        if(sum==B){
            ans.push_back(temp);
            return;
        }
        if(idx>=A.size()){
            return;
        }
        if(sum>B){
            return;
        }
        temp.push_back(A[idx]);
        subset(A, B, sum+A[idx], idx+1, ans, temp);
        temp.pop_back();
        
        while(idx<A.size() && A[idx]==A[idx+1]){
            idx++;
        }
        
        subset(A, B, sum, idx+1, ans, temp);
    }
  public:
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        subset(candidates, target, 0, 0, ans, temp);
        return ans;
    }
};


//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends