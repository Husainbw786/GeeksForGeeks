class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int n){
        
        // your code here
        int maxSum = INT_MIN;
        int minSum = INT_MAX, curMax = 0;
        int curMin = 0,tempsum = 0;
        int i;
        for(i=0;i<n;i++)
        {
            tempsum += arr[i];
            curMax += arr[i];
            curMin += arr[i];
            maxSum = max(maxSum,curMax);
            minSum = min(minSum,curMin);
            if(curMax < 0)
            {
                curMax = 0;
            }
            if(curMin > 0)
            {
                curMin = 0;
            }
        }
        if(minSum == tempsum)
        {
            return maxSum;
        }
        else
        {
            return max(maxSum,tempsum - minSum);
        }
    }
};
