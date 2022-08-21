class Solution
{
    public:
    
    //Function to find the number of 'X' total shapes.
    void dfs(vector<vector<char>>& grid , int x ,int y)
    {
        if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size())
        {
            return;
        }
        if(grid[i][j] == 'O')
        {
            return;
        }
        
        grid[i][j] = 'O';
        dfs(grid,x+1,y);
        dfs(grid,x-1,y);
        dfs(grid,x,y+1);
        dfs(grid,x,y-1);
        
        
    }
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        int count = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 'X')
                {
                    count++;
                    dfs(grid,i,j);
                }
            }
        }
        return count;
    }
};
