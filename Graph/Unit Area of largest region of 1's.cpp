class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    
    int dfs(int i, int j,vector<vector<int>>& grid, int & count )
    {
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return 0;
        }
        if(grid[i][j] == 0)
        {
            return 0;
        }
        grid[i][j] = 0;
        if(dfs(i+1,j,grid,count))
        {
            count++;
        }
        if(dfs(i-1,j,grid,count))
        {
            count++;
        }
        if(dfs(i,j+1,grid,count))
        {
            count++;
        }
         if(dfs(i,j-1,grid,count))
        {
            count++;
        }
         if(dfs(i+1,j+1,grid,count))
        {
            count++;
        }
        if(dfs(i+1,j-1,grid,count))
        {
            count++;
        }
        if(dfs(i-1,j+1,grid,count))
        {
            count++;
        }
        if(dfs(i-1,j-1,grid,count))
        {
            count++;
        }
        return 1;
        
    }
    
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int i,j;
        
        int maxi = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               int count = 1;
               if(grid[i][j] == 1)
               {
                   dfs(i,j,grid,count);
                   maxi = max(maxi,count);
               }
            }
        }
        return maxi;
    }
};
