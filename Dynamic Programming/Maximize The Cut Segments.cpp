
class Solution
{
    public:
    //Function to find the maximum number of cuts.
  int dp[10005];
    
    int Solve(int n,int x,int y,int z)
    {
        if(n == 0)
        {
            return 0;
        }
        if(dp[n] != -1)
        {
            return dp[n];
        }
        int op1 = INT_MIN, op2 = INT_MIN, op3 = INT_MIN;
        if(n >= x)
        {
            op1 = Solve(n-x,x,y,z);
        }
        if(n >= y)
        {
            op2 = Solve(n-y,x,y,z);
        }
        if(n >= z)
        {
            op3 = Solve(n-z,x,y,z);
        }
        return dp[n] = 1 + max({op1,op2,op3});
    }
    
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        
        memset(dp,-1,sizeof(dp));
        int a = Solve(n,x,y,z);
        if(a < 0)
        {
            return 0;
        }
        return a;
        
    }
};
