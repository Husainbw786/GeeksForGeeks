class Solution
{
    public:
    //Function to find length of shortest common supersequence of two strings.
    
    string LCS(string X, string Y, int m ,int n)
    {
        string dp[m+1][n+1];
        int i,j;
        for(i=0;i<=m;i++){
        
            for(j=0;j<=n;j++)
            {
                if(i == 0 || j == 0)
                {
                    dp[i][j] = "";
                }
                else if(X[i-1] == Y[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + X[i-1];
                }
                else
                {
                     dp[i][j] = dp[i][j-1].size() > dp[i-1][j].size() ? dp[i][j-1]:dp[i-1][j];
                }
            }
        }
        
        return dp[m][n];
    }
    
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        //code here
        string ans = "";
        string lcs = LCS(X,Y,m,n);
        
        int p1=0,p2=0;
        
        for(char c : lcs)
        {
            while(X[p1] != c)
            {
                ans += X[p1++];
            }
            while(Y[p2] != c)
            {
                ans += Y[p2++]; 
            }
            ans += c;
            p1++,p2++;
        }
        ans += X.substr(p1) + Y.substr(p2);
        int size = ans.size();
        return size;
        
    }
};
