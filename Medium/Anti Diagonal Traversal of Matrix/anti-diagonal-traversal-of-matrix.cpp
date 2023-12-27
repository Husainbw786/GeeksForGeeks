//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> antiDiagonalPattern(vector<vector<int>> matrix) 
    {
        // Code here
      int n = matrix.size();
      int m = matrix[0].size();
      int i,j;
      map<int,vector<int>>mp;
      vector<int>ans;
      for(i=0;i<n;i++)
      {
          for(j=0;j<m;j++)
          {
              mp[i+j].push_back(matrix[i][j]);
          }
          
      }
      for(auto x : mp)
      {
          for(j=0;j<x.second.size();j++)
          {
              ans.push_back(x.second[j]);
          }
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
        vector<vector<int>> matrix;
        matrix.resize(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> ans = ob.antiDiagonalPattern(matrix);
        for (int i = 0; i < ans.size(); ++i) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends