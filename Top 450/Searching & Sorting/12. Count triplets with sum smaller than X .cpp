class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    int i;
	    int count = 0;
	    sort(arr,arr+n);
	    for(i=0;i<n;i++)
	    {
	       int j = i+1;
	       int k = n-1;
	       while(j<k)
	       {
	           if(arr[i] + arr[j] + arr[k] < sum)
	           {
	               count += k-j;
	               j++;
	           }
	           else if(arr[i] + arr[j] + arr[k] >= sum)
	           {
	               k--;
	           }
	         
	       }
	        
	    }
	    return count;
	}
		 

};
