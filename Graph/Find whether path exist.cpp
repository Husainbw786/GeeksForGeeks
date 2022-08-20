class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
 bool Solve(int x,int y,vector<vector<int>>& grid, vector<vector<bool>> &vis)
    {
if( x<0 || y<0 || x >= grid.size() || y >= grid[0].size() || vis[x][y] == true || grid[x][y] == 0)
{
    return false;
}
        if(grid[x][y] == 2)
        {
           return true;
        }
        vis[x][y] = true;
        if(Solve(x+1,y,grid,vis))
        {
           return true;
        }
        if(Solve(x-1,y,grid,vis))
        {
           return true;
        }
        if(Solve(x,y+1,grid,vis))
        {
           return true;
        }
        if(Solve(x,y-1,grid,vis))
        {
           return true;
        }
        return false;
 
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool>>vis(n,vector<bool>(m,false));
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(grid[i][j] == 1)
                {
                    if(Solve(i,j,grid,vis))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
