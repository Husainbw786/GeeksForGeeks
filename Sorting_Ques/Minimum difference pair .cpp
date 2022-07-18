class Solution{
	public:
   	int  minimum_difference(vector<int>nums){
   	    // Code here
   	    int i;
   	    sort(nums.begin(),nums.end());
   	    int sub = 0;
   	    int mi = INT_MAX;
   	    for(i=1;i<nums.size();i++)
   	    {
   	        sub = abs(nums[i] - nums[i-1]) ;
   	       mi = min (mi,sub);
   	        sub = 0;
   	    }
   	    return mi;
   	}    
};
