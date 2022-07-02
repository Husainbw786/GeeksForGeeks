
class Solution {
  public:
    int sumOfRowCol(int N, int M, vector<vector<int>> A) {
        
        // code here
        int i,j;
        int sum_row = 0;
        int sum_col = 0;
        for(i=0;i<N;i++)
        {
            for(j=0;j<M;j++)
            {
                sum_row += A[i][j];
                break;
            }
        }
         for(i=0;i<M;i++)
        {
            for(j=0;j<N;j++)
            {
                sum_col += A[j][i];
                break;
            }
        }
        if(sum_row == sum_col)
        {
            return 1;
        }
        return 0;
    }
};
