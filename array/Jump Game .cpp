class Solution {
  public:
    int canReach(int A[], int N) {
        // code here
        int step = 0;
        int i;
        for(i=0;i<N;i++)
        {
            if(step < i)
            {
                return 0;
            }
            step = max(step,i+A[i]);
        }
        return 1;
    }
};
