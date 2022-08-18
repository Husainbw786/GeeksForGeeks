class Solution {
  public:
    // Function to find the number of islands.
   void dfs(vector<vector<char>>& grid,vector<vector<int>>& visited,int n,int m,int i,int j){
        
        if(i<0 || j<0 || i>=n ||  j>=m )
        {
            return;
        }
        if(visited[i][j] == 1 || grid[i][j]=='0')
        {
            return;
        }
        
        visited[i][j]=1;
        
        dfs(grid,visited,n,m,i-1,j);
        dfs(grid,visited,n,m,i,j-1);
        dfs(grid,visited,n,m,i+1,j);
        dfs(grid,visited,n,m,i,j+1);
        dfs(grid,visited,n,m,i-1,j-1);
        dfs(grid,visited,n,m,i-1,j+1);
        dfs(grid,visited,n,m,i+1,j+1);
        dfs(grid,visited,n,m,i+1,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
      int n=grid.size();
       int m=grid[0].size();
       
       int count=0;
       vector<vector<int>>visited(n,vector<int>(m,0));
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               if(!visited[i][j] && grid[i][j]=='1'){
                   dfs(grid,visited,n,m,i,j);
                   count++;
               }
           }
       }
       return count;
        
    }
};
