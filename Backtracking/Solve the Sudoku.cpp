class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    bool isValid(int grid[N][N],int row,int col,int num)
    {
        for(int i=0;i<N;i++)
        {
            if(grid[row][i] == num)
            {
                return false;
            }
            if(grid[i][col] == num)
            {
                return false;
            }
            if(grid[3*(row/3)+i/3][3*(col/3)+i%3] == num)
            {
                return false;
            }
        }
        return true;
    }
    
    bool fillSudoku(int grid[N][N])
    {
        int i,j;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(grid[i][j] == 0)
                {
                    for(int x = 1;x <= N;x++)
                    {
                        if(isValid(grid,i,j,x))
                        {
                            grid[i][j] = x;
                            if(fillSudoku(grid) == true)
                            {
                                return true;
                            }
                            else
                            {
                                grid[i][j] = 0;
                            }
                         }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        return fillSudoku(grid);
    }
    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                cout << grid[i][j] << " ";
            }
        }
    
    }
};
