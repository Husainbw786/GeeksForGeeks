class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        int i,j;
        for(j=m-2;j>=0;j--)
        {
            for(i=0;i<n;i++)
            {
                int a = (i-1 >= 0 ? M[i-1][j+1] : 0);
                
                int b = M[i][j+1];
                
                int c = (i+1 < n ? M[i+1][j+1] : 0);
                M[i][j] += max({a,b,c}); 
            }
        }
        int ans = 0;
        for(i=0;i<n;i++)
        {
            ans = max(ans, M[i][0]);
        }
        return ans;
    }
};
