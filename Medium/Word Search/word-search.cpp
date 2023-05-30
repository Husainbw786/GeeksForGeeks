//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void dfs(int x, int y, string s, vector<vector<char>>& board, int idx, bool& found) {
        if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size()) {
            return;
        }
        
        if (s[idx] != board[x][y]) {
            return;
        }
        
        if (idx == s.size() - 1) {
            found = true;
            return;
        }
        
        char temp = board[x][y];
        board[x][y] = '*';
        
        dfs(x + 1, y, s, board, idx + 1, found);
        dfs(x - 1, y, s, board, idx + 1, found);
        dfs(x, y + 1, s, board, idx + 1, found);
        dfs(x, y - 1, s, board, idx + 1, found);
        
        board[x][y] = temp;
    }

    bool isWordExist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        
        bool found = false;
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dfs(i, j, word, board, 0, found);
                if (found) {
                    return true;
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends