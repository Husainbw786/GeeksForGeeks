class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        // Your code goes here
        int i;
        long long s = 0;
        for(i=0;i<N-1;i++)
        {
            if(arr[i]+arr[i+1]>s)
            {
                s = arr[i] + arr[i+1];
            }
        }
        return s;
    }
};
