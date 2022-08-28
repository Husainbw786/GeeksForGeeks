class Solution
{
  public:
    int minOperation(int n)
    {
        //code here.
        int ans = 1;
        if(n == 0 || n == 1)
        {
            return n;
        }
        while(n>1)
        {
            if(n % 2 == 0)
            {
                n = n / 2;
                ans++;
            }
            else
            {
                n = n-1;
                ans++;
            }
        }
        return ans;
    }
};
