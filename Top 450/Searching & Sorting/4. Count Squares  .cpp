class Solution {
  public:
    int countSquares(int N) {
        // code here
        int i;
        int count = 0;
        int ans;
        for(i=1;i<=N;i++)
        {
            ans = i*i;
            if(ans < N)
            {
                count++;
            }
         
            if(ans > N)
            {
                break;
            }
               ans = 0;
        }
        return count;
    }
};
