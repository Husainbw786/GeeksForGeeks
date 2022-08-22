class Solution {
public:

   bool dfs(int x,int y,string s,vector<vector<char>>& board,int idx)
   {
       if(x < 0 || x >= board.size() || y < 0 || y >= board[0].size() )
       {
           return false;
       }
       if(s[idx] != board[x][y])
       {
           return false;
       }
       if( idx == s.size()-1)
       {
           return true;
       }
       char temp = board[x][y];
       board[x][y] = '*' ;
       bool a = false,b = false, c = false, d = false;
       a = dfs(x+1,y,s,board,idx+1);
       b = dfs(x-1,y,s,board,idx+1);
       c = dfs(x,y+1,s,board,idx+1);
       d = dfs(x,y-1,s,board,idx+1);
       board[x][y] = temp;
       return a || b || c || d;
   }

    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int n = board.size();
        int m = board[0].size();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(dfs(i,j,word,board,0))
                {
                    return true;
                }
            }
        }
        return false;
    }
};
