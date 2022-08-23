class Solution {
  public:
  
  bool check(int i,int j,int n,int m)
  {
      if( i<0 || j < 0|| i >= n || j >= m)
      {
          return false;
      }
      return true;
  }
  
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
          int i,j;
          int n = grid.size();
          int m = grid[0].size();
          int a = source.first;
          int b = source.second;
          queue<pair<int,int>>q;
          q.push({a,b});
          int ans = 0;
          if(grid[a][b] == 0)
          {
              return 0;
          }
          int disA = destination.first;
          int disB = destination.second;
          while(!q.empty())
          {
              int size = q.size();
              while(size--)
              {
                  pair<int,int>temp = q.front();
                  int i = temp.first;
                  int j = temp.second;
                  q.pop();
                  if( i == disA && j == disB)
                  {
                      return ans;
                  }
              
              if(check(i+1,j,n,m) && grid[i+1][j] == 1)
              {
                  q.push({i+1,j});
                  grid[i+1][j] = 0;
              }
               if(check(i-1,j,n,m) && grid[i-1][j] == 1)
              {
                  q.push({i-1,j});
                  grid[i-1][j] = 0;
              }
               if(check(i,j+1,n,m) && grid[i][j+1] == 1)
              {
                  q.push({i,j+1});
                  grid[i][j+1] = 0;
              }
               if(check(i,j-1,n,m) && grid[i][j-1] == 1)
              {
                  q.push({i,j-1});
                  grid[i][j-1] = 0;
              }
            }
              ans++;
          }
          return -1;
    }
};
