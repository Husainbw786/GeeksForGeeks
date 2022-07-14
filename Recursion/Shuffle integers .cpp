class Solution{
	
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    vector<int>v;
	    int i = 0;
	    int j = n/2;
	    while(j<n)
	    {
	        v.push_back(arr[i]);
	        v.push_back(arr[j]);
	        i++,j++;
	    }
	    for(i=0;i<n;i++)
	    {
	        arr[i] = v[i];
	    }
	}
		 

};
