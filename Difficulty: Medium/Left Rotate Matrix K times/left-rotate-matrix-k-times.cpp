//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        // code here
         int n=mat.size();
        int m=mat[0].size();
        k=k%m;
        if(k==0) return mat;
        vector<vector<int>> ans(n,vector<int>(m));
        int x=0;
        int y=0;
        for(int i=0;i<n;i++){
            vector<int> extra(k);
            int l=0;
            for(int j=0;j<m;j++){
                if(j<k){
                    extra[l]=mat[i][j];
                    l++;
                }
                else{
                    ans[x][y]=mat[i][j];
                    y++;
                }
            }
            for(int c=0;c<k;c++){
                ans[x][y]=extra[c];
                y++;
            }
            x++;
            y=0;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(k, mat);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++)
                cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}

// } Driver Code Ends