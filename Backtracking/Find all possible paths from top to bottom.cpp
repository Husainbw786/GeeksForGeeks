class Solution
{
public:

void dfs( int x,int y,int n,int m,vector<vector<int>>&vis,vector<vector<int>> &grid,vector<int>temp,vector<vector<int>>&v)
 
  {
     if(x < 0 || y < 0 || x >= grid.size() || y >= grid[0].size() || vis[x][y] == 1)
     {
         return;
     }
     temp.push_back(grid[x][y]);
     if( x == n-1 && y == m-1)
     {
         v.push_back(temp);
         return;
     }
     vis[x][y] = 1;
     dfs(x+1,y,n,m,vis,grid,temp,v);
     dfs(x,y+1,n,m,vis,grid,temp,v);
    vis[x][y] = 0;
     
  }

    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
    {
        // code here
        
        vector<vector<int>>vis(n,vector<int>(m));
        vector<vector<int>>v;
        vector<int>temp;
       dfs(0,0,n,m,vis,grid,temp,v);
       return v;
        
    }
};
