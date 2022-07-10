class Solution{


	public:
	int findMaxSubarraySum(long long arr[], int n, long long k)
	{
	    // Your code goes here
	    int i = 0, j = 0;
	    int sum = 0;
	    int Maxsum = 0;
	    while(j<n)
	    {
	        sum = sum + arr[j];
	        if(sum <= k)
	        {
	            Maxsum = max(Maxsum,sum);
	        }
	        else if(sum > k)
	        {
	            while(sum > k)
	            {
	                sum = sum - arr[i];
	                i++;
	            }
	            if(sum <= k)
	            {
	                Maxsum = max(Maxsum,sum);
	            }
	        }
	        j++;
	    }
	    return Maxsum;
	}  

		 

};
	  
