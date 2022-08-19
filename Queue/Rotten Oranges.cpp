class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int row = grid.size();
        int col = grid[0].size();
        int i,j;
        queue<pair<int,int>>q;
        
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j] == 2)
                {
                    q.push({i,j});
                }
            }
        }
        int count = 0;
        q.push({-1,-1});
        while(!q.empty())
        {
            i = q.front().first;
            j = q.front().second;
            if(i == -1 && j == -1 && q.size() == 1)
            {
                q.pop();
                break;
            }
            else if(i == -1 && j == -1 && q.size() > 1)
            {
                count++;
                q.pop();
                q.push({-1,-1});
            }
            else
            {
                if( (i-1) >= 0 && grid[i-1][j] == 1) 
                {
                    grid[i-1][j] = 2;
                    q.push({i-1,j});
                }
                if( (j-1) >= 0 && grid[i][j-1] == 1)
                {
                    grid[i][j-1] = 2;
                    q.push({i,j-1});
                }
                if( (i+1) < row && grid[i+1][j] == 1)
                {
                    grid[i+1][j] = 2;
                    q.push({i+1,j});
                }
                if( (j+1) < col && grid[i][j+1] == 1)
                {
                    grid[i][j+1] = 2;
                    q.push({i,j+1});
                }
                q.pop();
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(grid[i][j] == 1)
                {
                    return -1;
                }
            }
        }
        return count;
    }
};
