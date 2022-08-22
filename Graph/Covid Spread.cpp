class Solution {
public:

   bool Check(int i,int j,int row ,int col)
   {
       if(i < 0 || j < 0 || i >= row || j >= col)
       {
           return false;
       }
       return true;
   }

    int helpaterp(vector<vector<int>> grid)
    {
        //code here
        int row = grid.size();
        int col = grid[0].size();
        queue<pair<int,int>>q;
        int count = 0;
        int i,j;
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
        while(!q.empty())
        {
            int size = q.size();
            bool flag = false;
            while(size--)
            {
                i = q.front().first;
                j = q.front().second;
                q.pop();
                if(Check(i+1,j,row,col) && grid[i+1][j] == 1)
                {
                    grid[i+1][j] = 2;
                    q.push({i+1,j});
                    flag = true;
                }
                if(Check(i-1,j,row,col) && grid[i-1][j] == 1)
                {
                    grid[i-1][j] = 2;
                    q.push({i-1,j});
                    flag = true;
                }
                if(Check(i,j+1,row,col) && grid[i][j+1] == 1)
                {
                    grid[i][j+1] = 2;
                    q.push({i,j+1});
                    flag = true;
                }
                if(Check(i,j-1,row,col) && grid[i][j-1] == 1)
                {
                    grid[i][j-1] = 2;
                    q.push({i,j-1});
                    flag = true;
                }
            }
            if(flag == true)
            {
                count++;
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
