class Solution{
    public:
    
    void rearrange(long long *arr, int n) 
    { 
    	
    	// Your code here
    int i;
	vector<int>v;
     for(i=0;i<n;i++)
     {
         v.push_back(arr[i]);
     }
    	 i = 0;
    	int j = n-1;
    	int  k = 0;
    
    	while( i <= j)
    	{
    	    arr[k] = v[j];
    	    j--;
    	    k++;
    	    arr[k] = v[i];
    	    i++,k++;
    	}
    	 
    }
};
