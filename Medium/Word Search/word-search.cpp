//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution {
public:

    bool dfs(int idx, int i, int j, vector<vector<char>>&board, string word)
    {
        if(idx == word.size())
        {
            return true;
        }
        if(i < 0 || j < 0 || i >= board.size() || j >= board[0].size() || board[i][j] != word[idx])
        {
            return false;
        }
        if(board[i][j] == word[idx])
        {
            char x = board[i][j];
            board[i][j] = '#';
            if(dfs(idx+1,i+1,j,board,word)) return true;
            if(dfs(idx+1,i-1,j,board,word)) return true;
            if(dfs(idx+1,i,j+1,board,word)) return true;
            if(dfs(idx+1,i,j-1,board,word)) return true;
            board[i][j] = x;
            return false;
            
        }
        return false;
        
        
    }

    bool wordSearch(vector<vector<char>>& board, string w) {
        //code here
        
        int n = board.size();
        int m = board[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(board[i][j] == w[0])
                {
                    if(dfs(0,i,j,board,w))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<char>> mat(n,vector<char>(m));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }
        string str; cin>>str;
        Solution ob;
        auto ans=ob.wordSearch(mat,str);
        cout<<ans<<"\n";
    }
    return 0;
}

// } Driver Code Ends