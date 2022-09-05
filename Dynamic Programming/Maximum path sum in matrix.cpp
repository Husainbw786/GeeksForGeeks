class Solution{
public:
    int maximumPath(int n, vector<vector<int>> mat)
    {
        // code here
        int i,j;
        for(int i=1;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j>0 && j < n-1)
                {
                    mat[i][j] += max({mat[i-1][j],mat[i-1][j-1],mat[i-1][j+1]});
                }
                else if(j>0)
                {
                    mat[i][j] += max(mat[i-1][j],mat[i-1][j-1]); 
                }
                else if(j < n-1)
                {
                    mat[i][j] += max(mat[i-1][j],mat[i-1][j+1]);
                }
            }
        }
        int ans = 0;
        for(i=0;i<n;i++)
        {
            ans = max(mat[n-1][i],ans);
        }
        return ans;
    }
};
