class Solution {
  public:
    int diagonalSumDifference(int N, vector<vector<int>> Grid) {
        // code here
        int sum = 0;
        int sum1 = 0;
        int sum2 = 0;
        
        int i,j;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(i==j)
                {
                sum1 += Grid[i][j];
            
                }
            }
        }
        
         for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(i+j == N-1)
                {
                sum2 += Grid[i][j];
            
                }
            }
        }
        sum = abs(sum1 - sum2);
        return sum;
    }
};
