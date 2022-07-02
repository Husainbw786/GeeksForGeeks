class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int i,j;
        int sum1 = 0;
        int sum2 = 0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<=i;j++)
            {
                sum2 = sum2 + matrix[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=n-1;j>=i;j--)
            {
                sum1 = sum1 + matrix[i][j];
            }
        }
        
        return {sum1,sum2};
    }
};
