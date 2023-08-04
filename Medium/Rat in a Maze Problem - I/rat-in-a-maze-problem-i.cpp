//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
    
   class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& maze, vector<vector<int>>& vis, set<string>& st, string temp) {
        if (i < 0 || j < 0 || i >= maze.size() || j >= maze[0].size() || maze[i][j] != 1 || vis[i][j] == 1) {
            return;
        }

        if (i == maze.size() - 1 && j == maze.size() - 1) {
            st.insert(temp);
            return;
        }

        vis[i][j] = 1;
        dfs(i - 1, j, maze, vis, st, temp + 'U');
        dfs(i + 1, j, maze, vis, st, temp + 'D');
        dfs(i, j + 1, maze, vis, st, temp + 'R');
        dfs(i, j - 1, maze, vis, st, temp + 'L');
        vis[i][j] = 0;
    }

    vector<string> findPath(vector<vector<int>>& maze, int n) {
        set<string> st;
        vector<vector<int>> vis(n, vector<int>(n, 0));
        dfs(0, 0, maze, vis, st, "");
        vector<string> ans(st.begin(), st.end());
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
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends