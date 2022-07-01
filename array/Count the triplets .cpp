class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int i = n-1;
	    
	    int count = 0;
	    while(i>0)
	    {
	        int l = 0;
	        int r = n-1;
	        while(l<r)
	        {
	            if(arr[l]+arr[r] == arr[i])
	            {
	                count++;
	                l++;
	                r--;
	                
	            }
	            else if(arr[l]+ arr[r] < arr[i])
	            {
	                l++;
	            }
	            else
	            {
	                r--;
	            }
	        }
	        i--;
	    }
	    return count;
	}
};
